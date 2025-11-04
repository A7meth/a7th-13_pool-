/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7meth <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:00:00 by a7meth            #+#    #+#             */
/*   Updated: 2025/11/03 16:00:00 by a7meth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_01_H
# define RUSH_01_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_atoi(char *str);
int		check_input(char *str, int *clues);
int		solve(int grid[4][4], int clues[16], int pos);
int		check_row(int grid[4][4], int row, int *clues);
int		check_col(int grid[4][4], int col, int *clues);
int		is_valid(int grid[4][4], int row, int col, int val);
void	print_grid(int grid[4][4]);

#endif

