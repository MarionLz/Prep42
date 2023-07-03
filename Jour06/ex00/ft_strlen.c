#include <stddef.h>

int ft_strlen(char *str)
{
    size_t length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}
