/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/11/03 17:00:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void ft_error() { printf("Error\n"); }

int is_number(char *s) {
    if (!s) return 0;
    for (int i = 0; s[i]; i++)
        if (!isdigit(s[i])) return 0;
    return 1;
}

void print_number_in_words(char *num, char *dict) {
    (void)dict;
    int n = atoi(num);
    if (n < 0) { ft_error(); return; }
    char *ones[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    char *teens[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char *tens[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    if (n < 10)
        printf("%s\n", ones[n]);
    else if (n < 20)
        printf("%s\n", teens[n-10]);
    else {
        int t = n / 10;
        int o = n % 10;
        printf("%s", tens[t]);
        if (o != 0)
            printf(" %s", ones[o]);
        printf("\n");
    }
}

int main(int argc, char **argv) {
    char *dict = "numbers.dict";
    char *num = NULL;
    if (argc == 2)
        num = argv[1];
    else if (argc == 3) {
        dict = argv[1];
        num = argv[2];
    }
    else {
        ft_error();
        return 1;
    }
    if (!is_number(num)) {
        ft_error();
        return 1;
    }
    print_number_in_words(num, dict);
    return 0;
}

