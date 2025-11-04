/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int		fd;
	int		r;
	char	buf[4096];

	if (ac < 2)
		write(2, "File name missing.\n", 19);
	else if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(av[1], O_RDONLY);
		if (fd < 0)
			write(2, "Cannot read file.\n", 18);
		else
		{
			r = read(fd, buf, 4096);
			while (r > 0)
			{
				write(1, buf, r);
				r = read(fd, buf, 4096);
			}
			close(fd);
		}
	}
	return (0);
}
