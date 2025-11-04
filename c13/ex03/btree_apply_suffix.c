/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:05:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/19 16:05:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	f(root->item);
}
/*
#include <stdio.h>
#include <stdlib.h>
void print(void *i){ printf("%s\n",(char*)i); }
int main(void)
{
	t_btree *a=btree_create_node("B42"),
			*l=btree_create_node("A13"),
			*r=btree_create_node("C37");
	a->left=l; a->right=r;
	btree_apply_suffix(a,print);
	free(a);free(l);free(r);
}
*/
