#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *metin = "Merhaba!";
    int uzunluk = ft_strlen(metin);

    printf("Uzunluk: %d\n", uzunluk); // Beklenen çıktı: 8

    return 0;
}

