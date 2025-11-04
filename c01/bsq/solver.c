/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:25:00 by a7th              #+#    #+#             */
/*   Updated: 2025/11/03 19:30:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// Find biggest square using DP
void solve_bsq(t_map *map)
{
    int **dp;
    int max = 0;
    int max_i = 0, max_j = 0;

    dp = malloc(sizeof(int*) * map->rows);
    for (int i = 0; i < map->rows; i++)
    {
        dp[i] = malloc(sizeof(int) * map->cols);
        for (int j = 0; j < map->cols; j++)
        {
            if (map->grid[i][j] == map->obstacle)
                dp[i][j] = 0;
            else if (i == 0 || j == 0)
                dp[i][j] = 1;
            else
                dp[i][j] = 1 + (dp[i-1][j] < dp[i][j-1] ? (dp[i-1][j] < dp[i-1][j-1] ? dp[i-1][j] : dp[i-1][j-1]) : (dp[i][j-1] < dp[i-1][j-1] ? dp[i][j-1] : dp[i-1][j-1]));
            
            if (dp[i][j] > max)
            {
                max = dp[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    // Fill the biggest square in map
    for (int i = max_i; i > max_i - max; i--)
        for (int j = max_j; j > max_j - max; j--)
            map->grid[i][j] = map->full;

    // Print map
    for (int i = 0; i < map->rows; i++)
    {
        write(1, map->grid[i], map->cols);
        write(1, "\n", 1);
    }

    // Free dp
    for (int i = 0; i < map->rows; i++)
        free(dp[i]);
    free(dp);
}

