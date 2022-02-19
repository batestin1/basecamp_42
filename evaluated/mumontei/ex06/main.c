#include <stdio.h>

int ft_strlen(char *str);

int    main(void)
{
    int tamanho;
    char str[10] = {'M', 'u', 'r', 'i', 'l', 'o'};

    tamanho = ft_strlen(str);

    printf("tamanho da array: %d\n", tamanho);
}