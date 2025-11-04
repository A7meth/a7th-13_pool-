/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:00:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/18 17:00:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
		if (f(tab[i++]))
			count++;
	return (count);
}

/*
#include <stdio.h>
int	ft_is_upper(char *s)
{
	return (*s >= 'A' && *s <= 'Z');
}

int	main(void)
{
	char *tab[] = {"hello", "World", "13", "Foo"};
	int n = ft_count_if(tab, 4, &ft_is_upper);

	printf("%d\n", n);
	return 0;
}
*/
