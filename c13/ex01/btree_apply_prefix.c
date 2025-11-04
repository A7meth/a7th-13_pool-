/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:00:00 by a7th              #+#    #+#             */
/*   Updated: 2025/11/01 16:00:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	applyf(root->item);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}
/*
#include <stdio.h>
#include <stdlib.h>
void print_item(void *item) { printf("%s\n", (char*)item); }
int main(void)
{
	t_btree *n1 = btree_create_node("13");
	t_btree *n2 = btree_create_node("42");
	t_btree *n3 = btree_create_node("37");
	n1->left = n2;
	n1->right = n3;
	btree_apply_prefix(n1, print_item);
	free(n1); free(n2); free(n3);
}
*/
