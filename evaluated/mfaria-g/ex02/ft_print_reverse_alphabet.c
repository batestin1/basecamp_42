/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-g <mfaria-g@student.42sp.org.brm    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 03:39:28 by mfaria-g          #+#    #+#             */
/*   Updated: 2022/02/09 03:56:12 by mfaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	letra;

	letra = 122;
	while (letra >= 97)
	{
		write (1, &letra, 1);
		letra--;
	}
}
