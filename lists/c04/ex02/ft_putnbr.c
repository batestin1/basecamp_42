/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:30:00 by macypria          #+#    #+#             */
/*   Updated: 2022/02/17 20:30:12 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	number;
	int			first_digit;
	int			carryover;

	number = nb;
	if (number < 0)
	{
		put_char('-');
		number *= -1;
	}
	if (number >= 10)
	{
		carryover = number / 10;
		ft_putnbr(carryover);
	}
	first_digit = number % 10;
	put_char('0' + first_digit);
}
