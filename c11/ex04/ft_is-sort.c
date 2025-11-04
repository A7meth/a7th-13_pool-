/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:45:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/18 17:45:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 1;
	desc = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			desc = 0;
		if (f(tab[i], tab[i + 1]) > 0)
			asc = 0;
		i++;
	}
	return (asc || desc);
}
/*
#include <stdio.h>
int cmp(int a, int b)
{
	return a - b;
}

int main(void)
{
	int tab1[] = {1, 2, 3, 4};
	int tab2[] = {4, 3, 2, 1};
	int tab3[] = {1, 3, 2, 4};

	printf("%d\n", ft_is_sort(tab1, 4, &cmp)); // 1
	printf("%d\n", ft_is_sort(tab2, 4, &cmp)); // 1
	printf("%d\n", ft_is_sort(tab3, 4, &cmp)); // 0
	return 0;
}
*/
