/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *l, unsigned int nbr)
{
	while (l && nbr--)
		l = l->next;
	return (l);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"
int main(void)
{
	t_list *a = malloc(sizeof(t_list));
	t_list *b = malloc(sizeof(t_list));
	t_list *c = malloc(sizeof(t_list));
	a->data = strdup("Hi");
	b->data = strdup("Sara");
	c->data = strdup("✨");
	a->next = b;
	b->next = c;
	c->next = NULL;
	t_list *n = ft_list_at(a, 1);
	if (n) printf("%s\n", (char*)n->data);
	n = ft_list_at(a, 5);
	if (!n) printf("NULL\n");
	free(a->data); free(a);
	free(b->data); free(b);
	free(c->data); free(c);
	return 0;
}
*/
