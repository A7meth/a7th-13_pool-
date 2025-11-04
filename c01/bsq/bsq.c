/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:35:00 by a7th              #+#    #+#             */
/*   Updated: 2025/11/03 20:10:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// Read map file into grid
char **read_map_file(char *filename, t_map *map)
{
    int fd = open(filename, O_RDONLY);
    if (fd < 0)
        return NULL;

    char buffer[10000];
    int bytes = read(fd, buffer, 10000);
    close(fd);
    buffer[bytes] = '\0';

    // First line: rows and chars
    int i = 0;
    while (buffer[i] >= '0' && buffer[i] <= '9')
        i++;
    map->rows = ft_atoi(buffer);
    map->empty = buffer[i++];
    map->obstacle = buffer[i++];
    map->full = buffer[i++];
    i++; // skip newline

    // Count columns from first row
    map->cols = 0;
    while (buffer[i + map->cols] && buffer[i + map->cols] != '\n')
        map->cols++;

    // Allocate grid
    map->grid = malloc(sizeof(char*) * map->rows);
    for (int r = 0; r < map->rows; r++)
    {
        map->grid[r] = malloc(sizeof(char) * (map->cols + 1));
        for (int c = 0; c < map->cols; c++)
            map->grid[r][c] = buffer[i++];
        map->grid[r][map->cols] = '\0';
        i++; // skip newline
    }
    return map->grid;
}

void free_map(t_map *map)
{
    for (int i = 0; i < map->rows; i++)
        free(map->grid[i]);
    free(map->grid);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putstr("Error\n");
        return 1;
    }

    t_map map;
    if (!read_map_file(argv[1], &map))
    {
        ft_putstr("Error\n");
        return 1;
    }

    solve_bsq(&map);
    free_map(&map);
    return 0;
}

