/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;

	while (begin_list)
	{
		tmp = begin_list -> next;
		free_fct(begin_list -> data);
		free(begin_list);
		begin_list = tmp;
	}
}
/*
#include<string.h>
#include<stdio.h>
int	main(void)
{
	t_list *a = malloc(sizeof(t_list));
	t_list *b = malloc(sizeof(t_list));
	t_list *c = malloc(sizeof(t_list));

	a->data = strdup("Hi");
	b->data = strdup("Sara");
	c->data = strdup("✨");

	a->next = b;
	b->next = c;
	c->next = 0;

	printf("Before: %s %s %s\n", (char*)a->data, 
			(char*)b->data, (char*)c->data);
	ft_list_clear(a, free);
	printf("After: sup m sweet💖\n");
}*/
