/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:05:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/19 16:05:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*res;

	if (!root)
		return (0);
	res = btree_search_item(root->left, data_ref, cmpf);
	if (res)
		return (res);
	if (cmpf(root->item, data_ref) == 0)
		return (root->item);
	return (btree_search_item(root->right, data_ref, cmpf));
}
/*
#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(void *a, void *b) { return strcmp((char*)a, (char*)b); }
void *search(t_btree *root, char *key)
{ return btree_search_item(root, key, cmp); }
int main(void)
{
    t_btree *root = NULL;
    btree_insert_data(&root, "B37", cmp);
    btree_insert_data(&root, "A42", cmp);
    btree_insert_data(&root, "C13", cmp);
    char *res = search(root, "C13");
    if (res) printf("Found: %s\n", res);
    else printf("Not found\n");
    free(root->left); free(root->right); free(root);
}
*/
