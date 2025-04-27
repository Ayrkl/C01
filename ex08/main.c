#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int array[] = {42, 10, 5, 3, 100, 1};
    int size = 6;
    int i;

    ft_sort_int_tab(array, size);

    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

