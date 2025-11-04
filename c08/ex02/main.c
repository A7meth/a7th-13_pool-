#include "ft_abs.h"

#include <stdio.h>
int main(void)
{
    int a = -5;
    int b = 0;
    int c = 42;

    printf("ABS(%d) = %d\n", a, ABS(a));
    printf("ABS(%d) = %d\n", b, ABS(b));
    printf("ABS(%d) = %d\n", c, ABS(c));

    return 0;
}

