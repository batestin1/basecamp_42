#include<stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char	src[15] = "Hello";
	char	dest[15] = " 42!";

	printf("Retorno: %s\n", ft_strncat(src, dest, 6));
}