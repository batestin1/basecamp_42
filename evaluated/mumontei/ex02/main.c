#include <stdio.h>

void ft_swap(int *a, int *b);

int    main(void)
{
    int *ptrA;
    int *ptrB;
    int a;
    int b;

    a = 32;
    b = 89;

    ptrA = &a;
    ptrB = &b;

    printf("a = %d | b = %d... endereço a: %p | endereço b: %p\n", *ptrA, *ptrB, ptrA, ptrB);
    ft_swap(ptrA, ptrB);
    printf("a = %d | b = %d... endereço a: %p | endereço b: %p\n", *ptrA, *ptrB, ptrA, ptrB);
}