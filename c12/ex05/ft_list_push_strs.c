/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	t_list	*n;

	list = 0;
	while (size-- > 0)
	{
		n = ft_create_elem(strs[size]);
		n->next = list;
		list = n;
	}
	return (list);
}
/*
#include <stdio.h>
int main(void)
{
    char *arr[] = {"first", "second", "third"};
    t_list *list = ft_list_push_strs(3, arr);

    // Print directly inside main
    t_list *tmp = list;
    while (tmp)
    {
        printf("%s -> ", (char *)tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n");

    return 0;
}
*/
