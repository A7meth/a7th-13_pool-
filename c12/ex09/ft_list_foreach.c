/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *l, void (*f)(void *))
{
	while (l)
	{
		f(l->data);
		l = l->next;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"
void print(void *d){printf("%s ",(char*)d);}
int main(void)
{
	t_list *a=malloc(sizeof(t_list));
 	*b=malloc(sizeof(t_list)),*c=malloc(sizeof(t_list));
	a->data=strdup("Hi"); b->data=strdup("Sara"); c->data=strdup("✨");
	a->next=b; b->next=c; c->next=NULL;
	ft_list_foreach(a, print);
	printf("\n");
	while(a){t_list *t=a->next; free(a->data); free(a); a=t;}
	return 0;
}*/
