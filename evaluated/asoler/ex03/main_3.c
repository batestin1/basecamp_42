#include<stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char	src[50] = "Hello";
	char	dest[50] = " 42!";

	printf("Retorno: %s\n", ft_strncat(src, dest, 4));
}