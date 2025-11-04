/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:26:55 by ahelamri          #+#    #+#             */
/*   Updated: 2025/08/02 17:44:24 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	r = 1;
	while (power > 0)
	{
		r *= nb;
		power--;
	}
	return (r);
}
