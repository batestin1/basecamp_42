/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-g <mfaria-g@student.42sp.org.brm    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 04:03:27 by mfaria-g          #+#    #+#             */
/*   Updated: 2022/02/13 00:18:40 by mfaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	x;
	char	p;

	if (n >= 0)
	{
		p = 'P';
		write (1, &p, 1);
	}		
	else
	{
		x = 'N';
		write (1, &x, 1);
	}
}
