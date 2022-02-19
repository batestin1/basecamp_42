/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:57:07 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/14 01:09:10 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FALSE 0
#define TRUE 1

int	ft_is_prime(int nb)
{
	int	counter;

	if (nb < 2)
		return (FALSE);
	counter = 2;
	while (counter < (nb / 2))
	{
		if ((nb % counter++) == 0)
			return (FALSE);
	}
	return (TRUE);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		++nb;
	}
}
