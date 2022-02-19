
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 6;
	ft_swap(&a, &b);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	return (0);
}
