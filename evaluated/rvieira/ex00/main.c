
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	src[9] = "RAPHAELA";
	char	dest[9];
	char	nl = '\n';

	
	ft_putstr(&src[0]);
	ft_putchar(nl);
	ft_putstr(ft_strcpy(&dest[0], &src[0]));
}
