#include <unistd.h>

void ft_putstr(char *str);

int    main(void)
{
    char string[10] = {'M', 'u', 'r', 'i', 'l', 'o'};

    ft_putstr(string);
}