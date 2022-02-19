#include <unistd.h>

int	ft_str_is_alpha(char *str);

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

void	ft_putnbr(int n)
{
	char	nb;

	if (n < 0)
	{
		n *= -1;
		nb = '-';
		ft_putchar(nb);
	}
	if (n == -2147483648)
	{
		write(1, "2147483648", 10);
		return ;
	}
	if (n < 10)
	{
		nb = n + 48;
		ft_putchar(nb);
	}
	else
	{
		ft_putnbr(n / 10);
		nb = (n % 10) + '0';
		ft_putchar(nb);
	}
}

int	main(void)
{
	char	src[9] = "";
	char	nl = '\n';

	
	ft_putstr(&src[0]);
	ft_putchar(nl);
	ft_putnbr(ft_str_is_alpha(&src[0]));
}
