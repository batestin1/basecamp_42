/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiacomo <jefersongiacomo@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 07:16:51 by jgiacomo          #+#    #+#             */
/*   Updated: 2022/02/07 06:23:30 by jgiacomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_i;
char	g_dez;
char	g_cem;
char	g_mil;
char	g_a_uni[9];
char	g_a_dez[9];
char	g_b_uni[9];
char	g_b_dez[9];
int		g_contador;
int		g_x;
int		g_igual;

int		g_contador_valido;

void	write_num(void)
{
	write(1, &g_mil, 1);
	write(1, &g_cem, 1);
	write(1, " ", 1);
	write(1, &g_dez, 1);
	write(1, &g_i, 1);
	if (!(g_mil == '9' && g_cem == '9' && g_dez == '9' && g_i == '8'))
	{
		write(1, ", ", 2);
	}
	g_contador_valido++;
}

void	save_num(void)
{
	g_a_uni[g_contador] = g_i;
	g_a_dez[g_contador] = g_dez;
	g_b_uni[g_contador] = g_cem;
	g_b_dez[g_contador] = g_mil;
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
		if (g_cem > '9')
		{
		g_mil++;
		g_cem = '0';
		}
	}
}

void	test_repet(void)
{		
	if (g_i == g_cem && g_dez == g_mil)
		g_igual = 3;
	while ((g_x < g_contador) && (g_igual < 3))
	{
		if ((g_a_uni[g_x] == g_i && g_a_dez[g_x] == g_dez)
			|| (g_b_uni[g_x] == g_i && g_b_dez[g_x] == g_dez))
			if ((g_a_uni[g_x] == g_cem && g_a_dez[g_x] == g_mil)
				|| (g_b_uni[g_x] == g_cem && g_b_dez[g_x] == g_mil))
				g_igual = 3;
		if (g_igual < 3)
			g_igual = 0;
	g_x++;
	}
	if (g_igual < 3)
		write_num();
}

void	ft_print_comb2(void)
{
	g_contador_valido = 0;
	g_contador = 0;
	g_i = '0';
	g_dez = '0';
	g_cem = '0';
	g_mil = '0';
	while (g_i <= '9' && g_dez <= '9' && g_cem <= '9' && g_mil <= '9')
	{
		g_x = 0;
		g_igual = 0;
		save_num();
		test_repet();
		test_end();
	}
	write(1, "\n", 2);
}
