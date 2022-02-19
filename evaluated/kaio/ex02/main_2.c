
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 6;
	ft_swap(&a, &b);
	printf("o valor de A é: %d\n", a);
	printf("o valor de B é: %d\n", b);
	return (0);
}
