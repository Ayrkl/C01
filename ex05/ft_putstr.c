#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') // null karaktere kadar dön
    {
        write(1, &str[i], 1); // her karakteri yaz
        i++;
    }
}

