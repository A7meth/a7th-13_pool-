/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7meth <a7meth@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:00:00 by a7meth            #+#    #+#             */
/*   Updated: 2025/11/01 16:00:00 by a7meth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **b, void *data,
		int (*cmp)(void *, void *))
{
	t_list	*n;
	t_list	*t;

	n = ft_create_elem(data);
	if (!b || !n)
		return ;
	if (!*b || cmp(data, (*b)->data) < 0)
	{
		n->next = *b;
		*b = n;
		return ;
	}
	t = *b;
	while (t->next && cmp(data, t->next->data) >= 0)
		t = t->next;
	n->next = t->next;
	t->next = n;
}
/*
#include <stdio.h>
void	print_list(t_list *l)
{
	while (l)
	{
		printf("%s -> ", (char *)l->data);
		l = l->next;
	}
	printf("NULL\n");
}
int	cmp_str(void *a, void *b)
{
	char *s1 = a;
	char *s2 = b;
	int i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
int	main(void)
{
	t_list *l = NULL;
	ft_sorted_list_insert(&l, "banana", cmp_str);
	ft_sorted_list_insert(&l, "apple", cmp_str);
	ft_sorted_list_insert(&l, "cherry", cmp_str);
	ft_sorted_list_insert(&l, "Sara✨`", cmp_str);
	printf("Sorted list:\n");
	print_list(l);
	return 0;
}*/
