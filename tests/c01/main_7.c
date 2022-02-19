
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	print(int print[], int size)
{
	int	d;

	d = 0;
	while (d < size)
	{
		printf("d: %d", print[d]);
		d++;
	}
}

int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4};
	int	size;

	size = 5;
	ft_rev_int_tab(tab, size);
	print(tab, size);
}
