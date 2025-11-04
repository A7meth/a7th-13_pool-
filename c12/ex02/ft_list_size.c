/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	n;

	n = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		n++;
	}
	return (n);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list a, b, c;

	a.next = &b;
	b.next = &c;
	c.next = NULL;

	printf("%d\n", ft_list_size(&a));
}
*/
