/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:31:13 by emodesto          #+#    #+#             */
/*   Updated: 2022/02/11 23:46:56 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	suport(char u1, char d1, char u2, char d2)
{
	u1 += '0';
	d1 += '0';
	u2 += '0';
	d2 += '0';
	ft_putchar(u1);
	ft_putchar(d1);
	ft_putchar(' ');
	ft_putchar(u2);
	ft_putchar(d2);
	if (u1 + u2 + d1 + d2 != 227)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		comb1;
	int		comb2;

	comb1 = 0;
	while (comb1 <= 98)
	{
		comb2 = comb1 + 1;
		while (comb2 <= 99)
		{
			if (comb1 != comb2)
				suport((comb1 / 10), (comb1 % 10), (comb2 / 10), (comb2 % 10));
			comb2++;
		}
		comb1++;
	}
}
