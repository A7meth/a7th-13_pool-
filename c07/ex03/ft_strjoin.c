/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_strcat_all(char *r, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			*r++ = strs[i][j++];
		if (i < size - 1)
		{
			k = 0;
			while (sep[k])
				*r++ = sep[k++];
		}
		i++;
	}
	*r = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*r;

	i = 0;
	len = 0;
	if (size == 0)
	{
		r = malloc(1);
		if (r)
			r[0] = 0;
		return (r);
	}
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * (size - 1);
	r = malloc(len + 1);
	if (!r)
		return (0);
	ft_strcat_all(r, size, strs, sep);
	return (r);
}

/*
#include <stdio.h>
int	main(void)
{
	char *tab[] = {"ya", "13", "ya", "37"};
	char *sep = " - ";
	char *res = ft_strjoin(4, tab, sep);
	printf("%s\n", res);
	free(res);
}
*/
