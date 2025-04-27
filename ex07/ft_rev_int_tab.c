void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int temp;

    while (i < size / 2)
    {
        temp = tab[i];                     // geçici olarak sakla
        tab[i] = tab[size - 1 - i];        // son elemanı başa koy
        tab[size - 1 - i] = temp;          // geçici olanı sona koy
        i++;
    }
}

