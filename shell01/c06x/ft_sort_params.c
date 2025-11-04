/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:32:41 by ahelamri          #+#    #+#             */
/*   Updated: 2025/08/04 17:40:34 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	f_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < ac - 1)
	{
		if (f_strcmp(av[i + 1], av[i]) < 0)
		{
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (i < ac)
	{
		putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
}
