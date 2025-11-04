/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	arr = malloc((max - min) * sizeof(int));
	if (!arr)
		return (0);
	while (min < max)
		arr[i++] = min++;
	return (arr);
}

/*
#include<stdio.h>
int	main()
{
	int *a = ft_range(2, 8);
	for (int i = 0; i < 8 - 2; i++)
		printf("%d ", a[i]);
	printf("\n");
	free(a);
}
*/
