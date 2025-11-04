/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:45:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/18 15:45:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new;
	int	i;

	new = malloc(sizeof(int) * length);
	if (!new)
		return (NULL);
	i = 0;
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (new);
}

/*
#include<stdio.h>
int	ft_double(int n) { return n * 2; }

int	main(void)
{
	int	tab[] = {1, 3, 3, 7};
	int	*res;
	int	i;

	res = ft_map(tab, 4, &ft_double);
	i = 0;
	while (i < 4)
		printf("%d ", res[i++]);
	free(res);
	printf("\n");
	return (0);
}
*/
