/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiacomo <jefersongiacomo@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 04:36:17 by jgiacomo          #+#    #+#             */
/*   Updated: 2022/02/10 16:33:41 by jgiacomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_numerais[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
long	g_i;
long	g_valor;

void	set_unit(int n)
{
	char	x;

	g_i = 1;
	x = '1';
	valor = 1;
	while (g_i <= n)
	{
		g_i++;
		g_valor = g_valor * 10;
	}
	g_valor = g_valor - 1;
	g_i = 0;
	printf("\n%ld\n", g_valor);
}

void	ft_print_combn(int n)
{
	int	casa;
	int	num_vetor;

	casa = 0;
	num_vetor = 0;
	set_unit(n);
	while (g_i <= g_valor)
	{
		g_i++;
	}
}
