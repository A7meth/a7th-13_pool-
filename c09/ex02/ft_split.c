/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	in_set(char c, char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

int	count(char *s, char *set)
{
	int	n;

	n = 0;
	while (*s)
	{
		while (*s && in_set(*s, set))
			s++;
		if (*s)
		{
			n++;
			while (*s && !in_set(*s, set))
				s++;
		}
	}
	return (n);
}

char	*word_dup(char *s, char *set)
{
	int		i;
	int		len;
	char	*w;

	len = 0;
	while (s[len] && !in_set(s[len], set))
		len++;
	w = malloc(len + 1);
	if (!w)
		return (0);
	i = 0;
	while (i < len)
	{
		w[i] = s[i];
		i++;
	}
	w[len] = 0;
	return (w);
}

char	**ft_split(char *s, char *set)
{
	int		i;
	int		n;
	char	**res;

	i = 0;
	n = count(s, set);
	res = malloc((n + 1) * sizeof(char *));
	if (!res)
		return (0);
	while (*s)
	{
		while (*s && in_set(*s, set))
			s++;
		if (*s)
		{
			res[i++] = word_dup(s, set);
			while (*s && !in_set(*s, set))
				s++;
		}
	}
	res[i] = 0;
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
	char **tab = ft_split("Hello,,,42,,,Network!", ",!");
	for (int i = 0; tab[i]; i++)
		printf("%s\n", tab[i]);
}
*/
