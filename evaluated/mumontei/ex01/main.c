#include <stdio.h>

void    ft_ultimate_ft(int *********nbr);

int    main(void)
{
    int    fortytwo;
    int    *ptr9;
    int    **ptr8;
    int    ***ptr7;
    int    ****ptr6;
    int    *****ptr5;
    int    ******ptr4;
    int    *******ptr3;
    int    ********ptr2;
    int    *********ptr;
    
    ptr = &ptr2;
    ptr2 = &ptr3;
    ptr3 = &ptr4;
    ptr4 = &ptr5;
    ptr5 = &ptr6;
    ptr6 = &ptr7;
    ptr7 = &ptr8;
    ptr8 = &ptr9;
    ptr9 = &fortytwo;
    fortytwo = 0;
    
    ft_ultimate_ft(ptr);
    printf("variavel fortytwo)\nvalor: %d\nendereço: %p\n\n\n", fortytwo, &fortytwo);
    printf("variavel fortytwo)\nvalor: %d\nendereço: %p\n", *********ptr, ptr9);
    return (0);
}