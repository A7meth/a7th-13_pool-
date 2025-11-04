/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_covert_base2.c                                  :+:      :+:    :+:   */
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

int	ft_index(char c, char *b)
{
	int	i;

	i = 0;
	while (b[i])
	{
		if (b[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *s, char *b)
{
	int	r;
	int	sign;
	int	idx;

	r = 0;
	sign = 1;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	while (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -sign;
		s++;
	}
	idx = ft_index(*s, b);
	while (idx != -1)
	{
		r = r * ft_strlen(b) + idx;
		s++;
		idx = ft_index(*s, b);
	}
	return (r * sign);
}

char	*fill_number(long nb, char *base, int len)
{
	long	tmp;
	int		b;
	char	*res;

	b = 0;
	while (base[b])
		b++;
	tmp = nb;
	if (tmp < 0)
		tmp = -tmp;
	res = malloc(len + 1);
	if (!res)
		return (0);
	res[len] = 0;
	while (len > 0)
	{
		len--;
		res[len] = base[tmp % b];
		tmp /= b;
	}
	if (nb < 0)
		res[0] = '-';
	return (res);
}

char	*ft_itoa_base(int n, char *base)
{
	long	nb;
	long	tmp;
	int		b;
	int		len;

	nb = n;
	b = 0;
	len = 0;
	if (n <= 0)
		len = 1;
	while (base[b])
		b++;
	tmp = nb;
	if (tmp < 0)
		tmp = -tmp;
	tmp /= b;
	while (tmp != 0)
	{
		len++;
		tmp /= b;
	}
	return (fill_number(nb, base, len));
}
