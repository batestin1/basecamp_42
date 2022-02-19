
#include<stdio.h>

int ft_strlen(char *str);

int    main(void)
{
    int tamanho;
    char str[12] = {'O', 'L', 'A', ' ', 'C', 'A', 'M', 'P', 'E', 'R'};

    tamanho = ft_strlen(str);

    printf("tamanho da array: %d\n", tamanho);
}