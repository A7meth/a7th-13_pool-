/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:25:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/18 16:25:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
		if (f(tab[i++]))
			return (1);
	return (0);
}
/*
#include<stdio.h>
int	ft_is_upper(char *s)
{
	return (*s >= 'A' && *s <= 'Z');
}

int	main(void)
{
	char *tab[] = {"hello", "World", "42", NULL};

	printf("%d\n", ft_any(tab, &ft_is_upper)); // prints 1
	return 0;
}
*/
