/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
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
#include <libgen.h>

static void	put_hex(unsigned char c)
{
	char	*hex;
	char	out[2];

	hex = "0123456789abcdef";
	out[0] = hex[c / 16];
	out[1] = hex[c % 16];
	write(1, out, 2);
}

static void	print_content(unsigned char *buf, int size)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (i < 16)
	{
		if (i < size)
			put_hex(buf[i]);
		else
			write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
	write(1, " |", 2);
	i = 0;
	while (i < size)
	{
		c = buf[i++];
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
			write(1, ".", 1);
	}
	write(1, "|\n", 2);
}

static void	print_line(unsigned char *buf, int size, int offset)
{
	(void)offset;
	write(1, "00000000  ", 10);
	print_content(buf, size);
}

static void	read_file(char *name)
{
	unsigned char	buf[16];
	int				fd;
	int				size;
	int				offset;

	fd = open(name, O_RDONLY);
	if (fd < 0)
	{
		write(2, basename(name), strlen(basename(name)));
		write(2, ": ", 2);
		write(2, strerror(errno), strlen(strerror(errno)));
		write(2, "\n", 1);
		return ;
	}
	offset = 0;
	size = read(fd, buf, 16);
	while (size > 0)
	{
		print_line(buf, size, offset);
		offset += size;
		size = read(fd, buf, 16);
	}
	close(fd);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac < 2)
		return (1);
	i = 1;
	while (i < ac)
		read_file(av[i++]);
	return (0);
}
