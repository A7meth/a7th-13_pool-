/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7meth <a7meth@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:00:00 by a7meth            #+#    #+#             */
/*   Updated: 2025/11/01 14:00:00 by a7meth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void	swap_nodes(t_list *b, int i, int n)
{
	t_list	*start;
	t_list	*end;
	void	*tmp;
	int		j;

	start = b;
	end = b;
	j = 0;
	while (j++ < i)
		start = start->next;
	j = 0;
	while (j++ < n - i - 1)
		end = end->next;
	tmp = start->data;
	start->data = end->data;
	end->data = tmp;
}

void	ft_list_reverse_fun(t_list *b)
{
	t_list	*tmp;
	int		n;
	int		i;

	tmp = b;
	n = 0;
	i = 0;
	while (tmp && ++n)
		tmp = tmp->next;
	while (i < n / 2)
	{
		swap_nodes(b, i, n);
		i++;
	}
}
/*
#include<stdlib.h>
#include <stdio.h>
#include "ft_list.h"
t_list	*ft_create_elem(void *data)
{
	t_list *node = malloc(sizeof(t_list));
	if (!node) return NULL;
	node->data = data;
	node->next = NULL;
	return node;
}
void	print_list(t_list *l)
{
	while (l)
	{
		printf("%s -> ", (char *)l->data);
		l = l->next;
	}
	printf("NULL\n");
}
int	main(void)
{
	t_list *l = ft_create_elem("42");
	l->next = ft_create_elem("37");
	l->next->next = ft_create_elem("13");
	printf("Original:\n");
	print_list(l);
	ft_list_reverse_fun(l);
	printf("Reversed:\n");
	print_list(l);
	return 0;
}*/
