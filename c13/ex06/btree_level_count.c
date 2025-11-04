/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:05:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/19 16:05:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	left;
	int	right;

	if (!root)
		return (0);
	left = btree_level_count(root->left);
	right = btree_level_count(root->right);
	if (left > right)
		return (left + 1);
	return (right + 1);
}
/*
#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	t_btree *r = btree_create_node("A");
	r->left = btree_create_node("B");
	r->right = btree_create_node("C");
	r->left->left = btree_create_node("D");
	printf("%d\n", btree_level_count(r));
	free(r->left->left); free(r->left); free(r->right); free(r);
}
*/
