/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*cur;
	t_list	*next;

	prev = 0;
	cur = *begin_list;
	while (cur)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	*begin_list = prev;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"
int main(void)
{
	t_list *a=malloc(sizeof(t_list));
 	*b=malloc(sizeof(t_list)),*c=malloc(sizeof(t_list)),*p;
	a->data=strdup("37"); b->data=strdup("42"); c->data=strdup("13");
	a->next=b; b->next=c; c->next=NULL;

	ft_list_reverse(&a);

	for(p=a;p;p=p->next) printf("%s ",(char*)p->data);
	printf("\n");
	while(a){p=a->next; free(a->data); free(a); a=p;}
	return 0;
}
*/
