/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:05:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/19 16:05:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

static void	apply_queue(t_q *q, int tail,
		void (*f)(void *, int, int))
{
	t_btree	*n;
	int		head;
	int		curr_level;
	int		lvl;
	int		first;

	head = 0;
	curr_level = -1;
	while (head < tail)
	{
		n = q[head].node;
		lvl = q[head].level;
		first = lvl != curr_level;
		f(n->item, lvl, first);
		curr_level = lvl;
		head++;
		if (n->left)
			q[tail++] = (t_q){n->left, lvl + 1};
		if (n->right)
			q[tail++] = (t_q){n->right, lvl + 1};
	}
}

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level,
			int is_first_elem))
{
	t_q	*q;
	int	tail;

	if (!root)
		return ;
	q = malloc(sizeof(t_q) * 1024);
	tail = 0;
	q[tail++] = (t_q){root, 0};
	apply_queue(q, tail, applyf);
	free(q);
}

/*
#include <stdio.h>
#include <stdlib.h>
void print_node(void *item, int lvl, int first)
{
    printf("[%d%s]: %s\n", lvl, first ? "*" : "", (char*)item);
}
int main(void)
{
    t_btree *r = btree_create_node("A");
    r->left = btree_create_node("B");
    r->right = btree_create_node("C");
    r->left->left = btree_create_node("D");
    btree_apply_by_level(r, print_node);
    free(r->left->left); free(r->left); free(r->right); free(r);
}
*/
