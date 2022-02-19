#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char	src[] = "Hello";
	char	dest[] = "World";

	printf("Retorno: %s\n", ft_strcat(src, dest));
}