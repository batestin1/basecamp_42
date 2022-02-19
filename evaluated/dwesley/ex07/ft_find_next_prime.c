/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 04:13:46 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/10 04:58:41 by dwesley          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
