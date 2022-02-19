/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:20:31 by mfaria-g          #+#    #+#             */
/*   Updated: 2022/02/13 23:04:12 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)

{
	char	num[3];

	num[0] = '0';
	num[1] = '1';
	num[2] = '2';
	while (num[0] <= '7')
	{
		while (num[1] <= '8')
		{
			while (num[2] <= '9')
			{
				write(1, num, 3);
				if (num[0] < '7')
					write(1, ", ", 2);
				num[2]++;
			}
			num[1]++;
			num[2] = num[1] + 1;
		}
		num[0]++;
		num[1] = num[0] + 1;
		num[2] = num[1] + 1;
	}
}
