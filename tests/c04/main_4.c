#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nb, char *base);

int		main(void)
{
	ft_putnbr_base(11686193, "lumberjackon");
	write(1, "\n", 1);
	ft_putnbr_base(6398, "elbaz");
	write(1, "\n", 1);
	ft_putnbr_base(3064304, "njetoa");
	write(1, "\n", 1);

	printf("Erro, você não passou:\n");
	ft_putnbr_base(3064304, "");
	ft_putnbr_base(3064304, "1");
	ft_putnbr_base(3064304, "njetoan");
	ft_putnbr_base(3064304, "njeto-a");
}