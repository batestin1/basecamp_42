#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char *src;
	char *dest;

	src = malloc(sizeof(char));
	src = "hello wolrd";
	dest = malloc(sizeof(char));
	ft_strcpy(dest, src);	
	printf("%s\n", dest);
	return (0);
}