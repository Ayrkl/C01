#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int x = 20;
    int y = 6;
    int bolum;
    int kalan;

    ft_div_mod(x, y, &bolum, &kalan);

    printf("Bölüm: %d\n", bolum);  // 20 / 6 = 3
    printf("Kalan: %d\n", kalan);  // 20 % 6 = 2

    return 0;
}

