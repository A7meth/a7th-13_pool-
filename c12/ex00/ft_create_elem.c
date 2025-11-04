/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:00:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/19 16:00:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

/*
#include <stdio.h>
#include "ft_list.h"
#include <stdlib.h>
t_list *ft_create_elem(void *data);
int main(void)
{
    t_list *node1 = ft_create_elem("hello");
    t_list *node2 = ft_create_elem("world");

    node1->next = node2; // link first node to second

    t_list *tmp = node1;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->data);
        tmp = tmp->next;
    }
    return 0;
}
*/
