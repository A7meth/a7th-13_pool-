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

static int	count_words(char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*word_dup(char *s, char c)
{
	int		len;
	char	*w;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	w = malloc(len + 1);
	if (!w)
		return (NULL);
	len = 0;
	while (s[len] && s[len] != c)
	{
		w[len] = s[len];
		len++;
	}
	w[len] = 0;
	return (w);
}

char	**ft_split(char *s, char c)
{
	char	**res;
	int		i;

	i = 0;
	res = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			res[i] = word_dup(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	res[i] = 0;
	return (res);
}

/*
#include<stdio.h>
int main(void)
{
	char **res;
	int i = 0;

	res = ft_split("hello,,world,test", ',');
	while (res && res[i])
	{
		printf("[%s]\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return 0;
}
*/
