/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:05:00 by a7th             #+#    #+#             */
/*   Updated: 2025/10/19 18:05:00 by a7th            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
    t_list *node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->data = data;
    node->next = NULL;
    return (node);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new = ft_create_elem(data);
	if (new)
	{
		new->next = *begin_list;
		*begin_list = new;
	}
}
/*
#include<stdio.h>
int	main(void)
{
	t_list *head = NULL;

	ft_list_push_front(&head, "world");
	ft_list_push_front(&head, "hello");

	t_list *tmp = head;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
	return 0;
}
*/
