#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int dizi[] = {1, 2, 3, 4, 5};
    int i;

    ft_rev_int_tab(dizi, 5);

    for (i = 0; i < 5; i++)
    {
        printf("%d ", dizi[i]);
    }

    return 0;
}

