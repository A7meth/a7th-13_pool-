/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:45:00 by a7th              #+#    #+#             */
/*   Updated: 2025/11/02 16:45:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void	ft_putchar(char c) { write(1, &c, 1); }
void	rush(int x, int y)
{
	for (int j = 0; j < y; j++)
	{
		for (int i = 0; i < x; i++)
		{
			if ((j == 0 || j == y-1) &&
					(i == 0 || i == x-1))
				ft_putchar('o');
			else if (j == 0 || j == y-1) ft_putchar('-');
			else if (i == 0 || i == x-1) ft_putchar('|');
			else ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
int	main(void){ rush(5, 3); return 0; }

