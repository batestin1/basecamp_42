#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *str;

	str = malloc(sizeof(char));
	str = "13231hg32";
	printf("%d\n", ft_str_is_numeric(str));
	return (0);
}