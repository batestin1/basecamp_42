/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosantos < dosantos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:14:22 by dosantos          #+#    #+#             */
/*   Updated: 2022/02/07 23:55:51 by dosantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	init;

	init = 'a';
	while (init <= 'z')
	{
		write(1, &init, 1);
		init++;
	}
}
