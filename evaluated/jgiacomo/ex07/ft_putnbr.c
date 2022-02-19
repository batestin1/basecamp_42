/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiacomo <jefersongiacomo@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 05:57:52 by jgiacomo          #+#    #+#             */
/*   Updated: 2022/02/10 03:51:05 by jgiacomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_n[10];

void	num_increment(void)
{	
	int	vetor;

	vetor = 0;
	while (vetor <= 10)
	{
		if (g_n[vetor] > 9)
		{
			g_n[vetor] = 0;
			g_n[vetor + 1]++;
		}
		vetor++;
	}
}

void	print_numeral(void)
{
	char	numeral[10];
	int		contador;

	contador = 9;
	while (contador >= 0)
	{
		numeral[contador] = '0' + contador;
		contador--;
	}
	contador = 9;
	while (contador >= 0)
	{
		if (g_n[contador] > 0)
		{
			while (contador >= 0)
			{
				write(1, &numeral[g_n[contador]], 1);
				contador--;
			}
		}
		contador--;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	int	i;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	i = 0;
	while (i < nb)
	{			
		num_increment();
		g_n[0]++;
		i++;
	}
	num_increment();
	print_numeral();
}
