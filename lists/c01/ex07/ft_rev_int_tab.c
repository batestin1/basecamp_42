/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 10:32:07 by macypria          #+#    #+#             */
/*   Updated: 2022/02/13 14:54:31 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	size--;
	while (a < size)
	{
		b = tab[a];
		tab[a] = tab[size];
		tab[size] = b;
		a++;
		size--;
	}
}
