/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-g <mfaria-g@student.42sp.org.brm    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 02:01:07 by mfaria-g          #+#    #+#             */
/*   Updated: 2022/02/09 03:56:28 by mfaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	letra;

	letra = 97;
	while (letra <= 122)
	{
		write (1, &letra, 1);
		letra++;
	}
}
