/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*c;
	t_list	*p;
	t_list	*t;

	c = *begin_list;
	p = 0;
	while (c)
	{
		if (cmp(c->data, data_ref) == 0)
		{
			t = c->next;
			free_fct(c->data);
			free(c);
			if (p)
				p->next = t;
			else
				*begin_list = t;
			c = t;
		}
		else
		{
			p = c;
			c = c->next;
		}
	}
}
/*
#include <stdio.h>
#include <string.h>
t_list *ft_create_elem(void *d)
{t_list *n = malloc(sizeof(t_list));n->data = d;n->next = 0;return n;}
void print_list(t_list *l)
{while (l){printf("%s\n", (char*)l->data);l = l->next;}}
int cmp(void *d, void *r){return strcmp((char*)d, (char*)r);}
void free_data(void *d){free(d);}
int main(void)
{t_list *h = ft_create_elem(strdup("sara✨"));
h->next = ft_create_elem(strdup("two"));
h->next->next = ft_create_elem(strdup("two"));
h->next->next->next = ft_create_elem(strdup("sara✨"));
ft_list_remove_if(&h, "two", cmp, free_data);print_list(h);}
*/
