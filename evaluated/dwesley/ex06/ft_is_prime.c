/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 04:01:10 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/10 04:25:33 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (FALSE);
	if (nb == 2)
		return (TRUE);
	if (nb % 2 == 0)
		return (FALSE);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (FALSE);
		i += 2;
	}
	return (TRUE);
}
