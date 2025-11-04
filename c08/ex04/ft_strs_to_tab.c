/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_ta.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	int		i;
	char	*r;

	i = 0;
	r = malloc(ft_strlen(s) + 1);
	if (!r)
		return (0);
	while (s[i])
	{
		r[i] = s[i];
		i++;
	}
	r[i] = 0;
	return (r);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*t;

	i = 0;
	t = malloc((ac + 1) * sizeof(t_stock_str));
	if (!t)
		return (0);
	while (i < ac)
	{
		t[i].size = ft_strlen(av[i]);
		t[i].str = av[i];
		t[i].copy = ft_strdup(av[i]);
		i++;
	}
	t[i].str = 0;
	return (t);
}
/*
#include<stdio.h>
int main(void)
{
    char *arr[] = {"Hello", "42", "World"};
    int ac = 3;
    struct s_stock_str *tab = ft_strs_to_tab(ac, arr);
    for (int i = 0; i < ac; i++)
        printf("str: %s | copy: %s | size: %d\n",
               tab[i].str, tab[i].copy, tab[i].size);
    return 0;
}
*/
