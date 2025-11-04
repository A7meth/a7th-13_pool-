/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:00:00 by a7th              #+#    #+#             */
/*   Updated: 2025/11/03 18:30:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

typedef struct s_dict
{
    char *num;
    char *word;
} t_dict;

// ------------------ DIRECT NUMBER ARRAYS ------------------
char *ones[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
char *teens[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char *tens[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

// ------------------ UTILS ------------------
void ft_putstr(char *s)
{
    int i = 0;
    while (s[i])
        write(1, &s[i++], 1);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_error(void)
{
    ft_putstr("Error\n");
}

int is_number(char *s)
{
    int i = 0;
    if (!s[0])
        return 0;
    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

// ------------------ DICTIONARY ------------------
char *read_file(char *filename)
{
    int fd = open(filename, O_RDONLY);
    if (fd < 0)
        return NULL;
    char *buf = malloc(10000);
    if (!buf)
        return NULL;
    int r = read(fd, buf, 10000);
    buf[r] = '\0';
    close(fd);
    return buf;
}

int count_lines(char *str)
{
    int i = 0, c = 0;
    while (str[i])
        if (str[i++] == '\n')
            c++;
    return c;
}

t_dict *parse_dict(char *str, int *size)
{
    int lines = count_lines(str);
    t_dict *dict = malloc(sizeof(t_dict) * (lines + 1));
    if (!dict)
        return NULL;

    int i = 0, j = 0, k;
    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        k = i;
        while (str[i] >= '0' && str[i] <= '9')
            i++;
        dict[j].num = malloc(i - k + 1);
        for (int l = 0; l < i - k; l++)
            dict[j].num[l] = str[k + l];
        dict[j].num[i - k] = '\0';
        while (str[i] && (str[i] == ' ' || str[i] == ':' || str[i] == '\t'))
            i++;
        k = i;
        while (str[i] && str[i] != '\n')
            i++;
        dict[j].word = malloc(i - k + 1);
        for (int l = 0; l < i - k; l++)
            dict[j].word[l] = str[k + l];
        dict[j].word[i - k] = '\0';
        j++;
        if (str[i]) i++;
    }
    *size = j;
    return dict;
}

void free_dict(t_dict *dict, int size)
{
    for (int i = 0; i < size; i++)
    {
        free(dict[i].num);
        free(dict[i].word);
    }
    free(dict);
}

// ------------------ PRINT NUMBER ------------------
void print_number(char *num, t_dict *dict, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(dict[i].num, num) == 0)
        {
            ft_putstr(dict[i].word);
            ft_putchar('\n');
            return;
        }
    }
    ft_error();
}

// ------------------ PRINT NUMBER DIRECT ------------------
void print_number_direct(int n)
{
    if (n < 10)
        ft_putstr(ones[n]);
    else if (n < 20)
        ft_putstr(teens[n - 10]);
    else
    {
        ft_putstr(tens[n / 10]);
        if (n % 10 != 0)
        {
            ft_putstr(" ");
            ft_putstr(ones[n % 10]);
        }
    }
    ft_putchar('\n');
}

// ------------------ MAIN ------------------
int main(int argc, char **argv)
{
    char *dict_file = "numbers.dict";
    char *num;

    if (argc == 2)
        num = argv[1];
    else if (argc == 3)
    {
        dict_file = argv[1];
        num = argv[2];
    }
    else
    {
        ft_error();
        return 1;
    }

    if (!is_number(num))
    {
        ft_error();
        return 1;
    }

    int number = atoi(num);
    if (number >= 0 && number <= 99)
    {
        print_number_direct(number);
        return 0;
    }

    char *dict_str = read_file(dict_file);
    if (!dict_str)
    {
        ft_error();
        return 1;
    }

    int dict_size = 0;
    t_dict *dict = parse_dict(dict_str, &dict_size);
    free(dict_str);
    if (!dict)
    {
        ft_error();
        return 1;
    }

    print_number(num, dict, dict_size);
    free_dict(dict, dict_size);
    return 0;
}

