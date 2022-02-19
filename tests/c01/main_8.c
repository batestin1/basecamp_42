#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	print(int print[], int size)
{
	int	d;

	d = 0;
	while (d < size)
	{
		printf("%d", print[d]);
		d++;
	}
}

int	main(void)
{
	int	tab[] = {0, 1, 2, 3,4,5,6,7,8,9};
	int	size;

	size = 10; 
	ft_sort_int_tab(tab, size);
	print(tab, size);
}