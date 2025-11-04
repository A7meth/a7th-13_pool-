/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUF 4096

void	print_input(int fd, char *name)
{
	char	buf[BUF];
	int		r;

	r = read(fd, buf, BUF);
	while (r > 0)
	{
		write(1, buf, r);
		r = read(fd, buf, BUF);
	}
	if (r < 0)
	{
		write(2, "cat: ", 5);
		write(2, name, strlen(name));
		write(2, ": ", 2);
		write(2, strerror(errno), strlen(strerror(errno)));
		write(2, "\n", 1);
	}
}

int	main(int ac, char **av)
{
	int		fd;
	int		i;

	i = 1;
	if (ac < 2)
		print_input(0, "stdin");
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd < 0)
		{
			write(2, "cat: ", 5);
			write(2, av[i], strlen(av[i]));
			write(2, ": ", 2);
			write(2, strerror(errno), strlen(strerror(errno)));
			write(2, "\n", 1);
		}
		else
		{
			print_input(fd, av[i]);
			close(fd);
		}
		i++;
	}
}
