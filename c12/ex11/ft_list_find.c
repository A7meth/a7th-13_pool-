/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:00:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/28 18:00:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref,
		int (*cmp)(void *, void*))
{
	while (begin_list)
		if (cmp(begin_list->data, data_ref) == 0)
			return (begin_list);
	else
		begin_list = begin_list->next;
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"
t_list *ft_create_elem(void *d)
{t_list *n=malloc(sizeof(t_list));n->data=d;n->next=0;return n;}
int cmp(void *d, void *r){return strcmp((char*)d,(char*)r);}
void print_node(t_list *n){if(n)printf("%s\n",(char*)n->data);}
int main(void)
{
    t_list *h=ft_create_elem("one");
    h->next=ft_create_elem("sara✨");
    h->next->next=ft_create_elem("three");
    print_node(ft_list_find(h,"sara✨",cmp));
}*/
