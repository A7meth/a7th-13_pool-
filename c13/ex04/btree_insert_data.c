/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:05:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/19 16:05:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (!*root)
		*root = btree_create_node(item);
	else if (cmpf(item, (*root)->item) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(void *a, void *b) { return strcmp((char*)a, (char*)b); }
void print(void *i) { printf("%s ", (char*)i); }
int main(void)
{
	t_btree *root = NULL;
	btree_insert_data(&root, "B13", cmp);
	btree_insert_data(&root, "A42", cmp);
	btree_insert_data(&root, "C37", cmp);
	btree_apply_infix(root, print);
	free(root->left); free(root->right); free(root);
	printf("\n");
}*/
