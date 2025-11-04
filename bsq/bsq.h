/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:00:00 by a7th              #+#    #+#             */
/*   Updated: 2025/11/03 19:10:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_map
{
    int     rows;
    int     cols;
    char    empty;
    char    obstacle;
    char    full;
    char    **grid;
}   t_map;

int     ft_atoi(char *str);
int     ft_strlen(char *str);
void    ft_putstr(char *str);
void    ft_putchar(char c);
char    **read_map_file(char *filename, t_map *map);
void    solve_bsq(t_map *map);
void    free_map(t_map *map);

#endif


