/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/11/03 19:20:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// Print string
void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}

// Print char
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// String length
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

// Convert string to int
int ft_atoi(char *str)
{
    int res = 0;
    int i = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return res;
}

