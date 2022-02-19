#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str[] = "teste teste 42teste";

	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}