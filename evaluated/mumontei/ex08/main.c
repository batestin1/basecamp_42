#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int    main(void)
{
    int i;
    int vector[9] = {4, 8, 7, -4, 2, 1, 0, 6, 9};

    ft_sort_int_tab(vector, 9);

    i=0;
    while(i <= 8)
    {
        printf("%d, ", vector[i]);
        i++;
    }

}