void ft_ultimate_div_mod(int *a, int *b)
{
    int temp;

    temp = *a;       // a'nın değerini geçici olarak sakla
    *a = *a / *b;    // a'nın yeni değeri: bölüm
    *b = temp % *b;  // b'nin yeni değeri: kalan
}

