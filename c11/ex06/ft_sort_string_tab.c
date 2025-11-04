/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:00:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/18 20:00:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	char	*tmp;

	i = 0;
	while (tab[i + 1])
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
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
#include<stdio.h>
int	main(void)
{
	char *tab[] = {"42", "37", "13", NULL};
	int i = 0;

	ft_sort_string_tab(tab);
	while (tab[i])
	{
		printf("%s ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
