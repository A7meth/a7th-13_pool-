/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa_base(int n, char *base);

int		ft_atoi_base(char *s, char *b);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	return (ft_itoa_base(ft_atoi_base(nbr, base_from), base_to));
}

/*
#include <stdio.h>
#include <stdlib.h>
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int	main()
{
    char	*res;
    res = ft_convert_base("1010", "01", "0123456789");
    printf("%s\n", res);
    free(res);
    res = ft_convert_base("-255", "0123456789", "0123456789ABCDEF");
    printf("%s\n", res);
    free(res);
    res = ft_convert_base("7F", "0123456789ABCDEF", "01");
    printf("%s\n", res);
    free(res);
    return 0;
}
*/
