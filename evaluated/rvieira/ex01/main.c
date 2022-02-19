
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

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
	char	dest[12];
	char	nl = '\n';

	
	ft_putstr(&src[0]);
	ft_putchar(nl);
	ft_putstr(ft_strncpy(&dest[0], &src[0], 12));
}
