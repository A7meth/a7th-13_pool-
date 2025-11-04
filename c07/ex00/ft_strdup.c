/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*d;

	i = 0;
	while (src[i])
		i++;
	d = malloc(i + 1);
	if (!d)
		return (0);
	i = -1;
	while (src[++i])
		d[i] = src[i];
	d[i] = 0;
	return (d);
}

/*
#include<stdio.h>
int	main()
{
	printf("%s\n", ft_strdup("1337"));
	return (0);
}
*/
