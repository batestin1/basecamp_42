/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 10:28:26 by macypria          #+#    #+#             */
/*   Updated: 2022/02/16 03:33:02 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_swap(int *a, int *b)
{
	int	sw;

	sw = *a;
	*a = *b;
	*b = sw;
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 6;
	ft_swap(&a, &b);
	printf("o valor de A é: %d e o valor de B é: %d", a, b);
	return (0);
}