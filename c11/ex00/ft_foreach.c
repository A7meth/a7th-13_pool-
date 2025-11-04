/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:05:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/18 15:05:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
/*
#include <stdio.h>
void	ft_print(int n) { printf("%d ", n); }
int	main(void)
{
	int	tab[] = {8, 3, 1, 8, 6, 3};
	ft_foreach(tab, 6, &ft_print);
	printf("\n");
	return 0;
}
*/
