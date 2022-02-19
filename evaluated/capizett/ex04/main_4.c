#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char *str;
	
	str = malloc(sizeof(char));
	str = "abc2defghi";
	printf("%d\n", ft_str_is_lowercase(str));
	return (0);
}
