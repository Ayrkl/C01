#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *metin = "Merhaba!";
    int size = ft_strlen(metin);

    printf("Uzunluk: %d\n", size); // Beklenen çıktı: 8

    return 0;
}

