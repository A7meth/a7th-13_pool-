/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:00:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/28 18:00:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)(void *, void *))
{
	while (begin_list)
	{
		if (cmp(begin_list->data, data_ref) == 0)
			f(begin_list->data);
		begin_list = begin_list->next;
	}
}
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void print_data(void *d){printf("%s\n",(char*)d);}
int cmp_data(void *d, void *r){return strcmp((char*)d,(char*)r);}
t_list *ft_create_elem(void *d)
{t_list *n=malloc(sizeof(t_list));n->data=d;n->next=0;return n;}
int main(void)
{
    t_list *head = ft_create_elem("37");
    head->next = ft_create_elem("sara✨");
    head->next->next = ft_create_elem("13");

    ft_list_foreach_if(head, print_data, "sara✨", cmp_data);

    return 0;
}
*/
