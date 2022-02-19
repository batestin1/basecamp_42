/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiacomo <jefersongiacomo@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 07:16:51 by jgiacomo          #+#    #+#             */
/*   Updated: 2022/02/09 17:55:58 by jgiacomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_i;
char	g_dez;
char	g_cem;
char	g_a_uni[9999];
char	g_a_dez[9999];
char	g_a_cen[9999];
int		g_contador;
int		g_x;
int		g_igual;

void	write_num(int norma)
{	
	if (norma == 1)
	{
		write(1, ", ", 2);
	}
	write(1, &g_cem, 1);
	write(1, &g_dez, 1);
	write(1, &g_i, 1);
}

void	save_num(void)
{
	g_a_uni[g_contador] = g_i;
	g_a_dez[g_contador] = g_dez;
	g_a_cen[g_contador] = g_cem;
}

void	test_end(void)
{
		g_contador++;
		g_i++;
	if (g_i > '9')
	{
	g_dez++;
	g_i = '0';
		if (g_dez > '9')
		{
		g_cem++;
		g_dez = '0';
		}
	}
}

void	test_repet(void)
{
	while ((g_x < g_contador) && (g_igual < 3))
	{
		if (g_a_uni[g_x] == g_i
			|| g_a_dez[g_x] == g_i
			|| g_a_cen[g_x] == g_i)
			if (g_a_uni[g_x] == g_dez
				|| g_a_dez[g_x] == g_dez
				|| g_a_cen[g_x] == g_dez)
				if (g_a_uni[g_x] == g_cem
					|| g_a_dez[g_x] == g_cem
					|| g_a_cen[g_x] == g_cem)
					g_igual = 3;
		if (g_igual < 3)
			g_igual = 0;
	g_x++;
	}
	if (g_igual < 3)
		write_num(1);
}

void	ft_print_comb(void)
{
	g_contador = 0;
	g_i = '2';
	g_dez = '1';
	g_cem = '0';
	while (g_i <= '9' && g_dez <= '9' && g_cem <= '9')
	{
		g_x = 0;
		g_igual = 0;
		if (g_i == '2' && g_dez == '1' && g_cem == '0')
		{
			write_num(0);
			save_num();
		}
		else
		{
			save_num();
			test_repet();
		}
		test_end();
	}
	write(1, "\n", 2);
}
