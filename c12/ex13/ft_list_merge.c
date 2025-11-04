/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_merge(t_list **l1, t_list *l2)
{
    t_list *c;

    if (!*l1)
    {
        *l1 = l2;
        return;
    }
    c = *l1;
    while (c->next)
        c = c->next;
    c->next = l2;
}
/*
#include <stdio.h>
#include <stdlib.h>
t_list *ft_create_elem(void *d){t_list *n=malloc(sizeof(t_list));n->data=d;n->next=0;return n;}
void print_list(t_list *l){while(l){printf("%s\n",(char*)l->data);l=l->next;}}
int main(void)
{
    t_list *l2=ft_create_elem("3");
    l2->next=ft_create_elem("7");
     t_list *l1=ft_create_elem("1");
    l1->next=ft_create_elem("3");
    ft_list_merge(&l1,l2);
    print_list(l1);
}*/
