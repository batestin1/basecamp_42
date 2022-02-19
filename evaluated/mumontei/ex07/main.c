#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int    main(void)
{
    int elem;
    int str[7] = {4, 6, 89, 0, 42, 12, 99};

    ft_rev_int_tab(str, 7);

    elem = 0;
    while(elem < 7)
    {
        printf("%d ", str[elem]);
        elem++;
    }
}