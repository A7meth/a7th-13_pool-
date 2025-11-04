/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define BUF_SIZE 8192

int	main(int ac, char **av)
{
	int		fd;
	long	n;
	long	size;
	char	buf[BUF_SIZE];

	if (ac < 3 || strcmp(av[1], "-c"))
	{
		write(2, "Usage: ./ft_tail -c <number> [file ...]\n", 41);
		return (1);
	}
	n = atol(av[2]);
	if (ac == 3)
		fd = 0;
	else
		fd = open(av[3], O_RDONLY);
	if (fd < 0)
		return (write(2, strerror(errno), strlen(strerror(errno))), 1);
	size = read(fd, buf, BUF_SIZE);
	if (size > n)
		write(1, buf + size - n, n);
	else
		write(1, buf, size);
	if (fd != 0)
		close(fd);
	return (0);
}
