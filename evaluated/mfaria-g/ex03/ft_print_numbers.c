/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-g <mfaria-g@student.42sp.org.brm    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 03:58:49 by mfaria-g          #+#    #+#             */
/*   Updated: 2022/02/09 04:00:30 by mfaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	numero;

	numero = 48;
	while (numero <= 57)
	{
		write (1, &numero, 1);
		numero++;
	}
}
