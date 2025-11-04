/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *))
{
	t_list	*c;
	void	*tmp;
	int		swapped;

	if (!begin_list || !*begin_list)
		return ;
	while (1)
	{
		swapped = 0;
		c = *begin_list;
		while (c->next)
		{
			if ((*cmp)(c->data, c->next->data) > 0)
			{
				tmp = c->data;
				c->data = c->next->data;
				c->next->data = tmp;
				swapped = 1;
			}
			c = c->next;
		}
		if (!swapped)
			break ;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
t_list *ft_create_elem(void *data)
{
	t_list *n = malloc(sizeof(t_list));
	n->data = data;
	n->next = NULL;
	return n;
}
int ft_strcmp(void *a, void *b)
{
	char *s1 = a; char *s2 = b; int i = 0;
	while (s1[i] && s1[i] == s2[i]) i++;
	return (s1[i] - s2[i]);
}
void ft_print(t_list *l){while(l){printf("%s ",(char *)l->data);l=l->next;}printf("\n");}
int main()
{
	t_list *l = ft_create_elem("pear");
	l->next = ft_create_elem("apple");
	l->next->next = ft_create_elem("banana");
	ft_print(l);
	ft_list_sort(&l, ft_strcmp);
	ft_print(l);
}*/
