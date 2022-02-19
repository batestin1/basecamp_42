
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 43;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("Divido: %d\n", div);
	printf("Resto: %d\n", mod);
	return (0);
}
