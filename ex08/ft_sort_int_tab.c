void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int temp;
    int sorted;

    sorted = 0;
    while (!sorted)
    {
        sorted = 1;
        i = 0;
        while (i < size - 1)
        {
            if (tab[i] > tab[i + 1])
            {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
                sorted = 0;
            }
            i++;
        }
    }
}

