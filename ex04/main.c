#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int x = 20;
    int y = 6;

    ft_ultimate_div_mod(&x, &y);

    printf("Bölüm: %d\n", x);  // 20 / 6 = 3
    printf("Kalan: %d\n", y);  // 20 % 6 = 2

    return 0;
}

