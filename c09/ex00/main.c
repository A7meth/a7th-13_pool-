#include <stdio.h>

void ft_putchar(char c);
void ft_putstr(char *str);
int  ft_strlen(char *str);
int  ft_strcmp(char *s1, char *s2);
void ft_swap(int *a, int *b);

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "World";
    int  a = 5;
    int  b = 10;

    ft_putstr("Testing ft_putchar: ");
    ft_putchar('A');
    ft_putchar('\n');

    ft_putstr("Testing ft_putstr: ");
    ft_putstr(str1);
    ft_putchar('\n');

    printf("Testing ft_strlen: %d\n", ft_strlen(str1));

    printf("Testing ft_strcmp: %d\n", ft_strcmp(str1, str2));
    printf("Testing ft_strcmp same: %d\n", ft_strcmp(str1, str1));

    printf("Before ft_swap: a = %d, b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("After ft_swap: a = %d, b = %d\n", a, b);

    return 0;
}

