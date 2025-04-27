int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') // null karaktere kadar say
    {
        i++;
    }

    return i;
}

