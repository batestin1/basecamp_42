/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 05:09:33 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/07 01:22:51 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	show(int x, int y, int col, int lin)
{
	char	c;

	c = ' ';
	if (col == 1 || col == x)
		c = 'B';
	if (lin == 1 || lin == y)
		c = 'B';
	if (col == 1 && lin == 1)
		c = 'A';
	if (col == x && lin == y)
		c = 'A';
	if (col == x && x > 1)
		if (lin == 1)
				c = 'C';
	if (col == 1)
		if (lin == y && y > 1)
				c = 'C';
	ft_putchar(c);
}

void	rush(int x, int y)
{
	int		lin;
	int		col;

	if (x <= 0 || y <= 0)
		return ;
	lin = 1;
	while (lin <= y)
	{
		col = 1;
		while (col <= x)
		{
			show(x, y, col, lin);
			col++;
		}
		ft_putchar(10);
		lin++;
	}
}
