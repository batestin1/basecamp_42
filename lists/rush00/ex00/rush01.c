/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 03:06:31 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/07 01:21:24 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	show(int x, int y, int col, int lin)
{
	char	c;

	c = ' ';
	if (col == 1 || col == x)
		c = '*';
	if (lin == 1 || lin == y)
		c = '*';
	if (col == 1 && lin == 1)
		c = '/';
	if (col == x && lin == y)
		c = '/';
	if (x > 1 && col == x && lin == 1)
		c = '\\';
	if (y > 1 && col == 1 && lin == y)
		c = '\\';
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
