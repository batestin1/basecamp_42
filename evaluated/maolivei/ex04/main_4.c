
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char str[] = "helloworld";
	char fnd[] = "hello42";
	printf("%s", ft_strstr(str, fnd));
	return (0);
}
