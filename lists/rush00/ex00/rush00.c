/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 02:11:31 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/07 15:10:56 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	show(int x, int y, int col, int lin)
{
	char	c;

	c = ' ';
	if (col == 1 || col == x)
		if (lin == 1 || lin == y)
			c = 'o';
	if (col != 1 && col != x)
		if (lin == 1 || lin == y)
			c = '-';
	if (col == 1 || col == x)
		if (lin != 1 && lin != y)
			c = '|';
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
