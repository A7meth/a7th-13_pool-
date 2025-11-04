/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:00:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/19 15:00:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*tmp;

	i = 0;
	while (tab[i + 1])
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
/*
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
		s1++, s2++;
	return (*s1 - *s2);
}
#include<stdio.h>
int	main(void)
{
	char *tab[] = {"zebra", "apple", "mango", "banana", NULL};
	int i;

	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	i = 0;
	while (tab[i])
		printf("%s\n", tab[i++]);
	return (0);
}
*/
