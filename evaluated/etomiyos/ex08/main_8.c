#include <stdio.h>
#include <stdlib.h>
char	*ft_strlowcase(char *str);

int	main(void)
{
	char str[] = "PANICO";
	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}