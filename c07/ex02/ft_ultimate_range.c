/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (*range = 0, 0);
	arr = malloc((max - min) * sizeof(int));
	if (!arr)
		return (-1);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	*range = arr;
	return (i);
}

/*
#include <stdio.h>
int main()
{
	int *a, i = 0;
	int size = ft_ultimate_range(&a, 2, 8);
	while (i < size)
		printf("%d ", a[i++]);
	printf("\n");
	free(a);
}
*/
