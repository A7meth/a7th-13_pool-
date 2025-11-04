/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}
/*
#include<stdio.h>
int	main(void)
{
	t_list a, b, c;
	t_list *last;

	a.data = "42";
	b.data = "37";
	c.data = "13";

	a.next = &b;
	b.next = &c;
	c.next = NULL;

	last = ft_list_last(&a);
	printf("%s\n", (char *)last->data);
}
*/
