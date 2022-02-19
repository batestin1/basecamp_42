
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	c;
	int	d;
	int	*a;
	int	*b;

	c = 43;
	d = 2;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);
	printf("*a: %d\n", *a);
	printf("*b: %d\n", *b);
	return (0);
}
