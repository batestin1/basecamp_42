#include <stdio.h>

void    ft_ft(int *nbr);

int    main(void)
{
    int    *ptr;
    int    fortytwo;

    fortytwo = 12;
    ptr = &fortytwo;
    printf("%d\n", fortytwo);
    ft_ft(ptr);
    printf("%d\n", fortytwo);
    return (0);
}