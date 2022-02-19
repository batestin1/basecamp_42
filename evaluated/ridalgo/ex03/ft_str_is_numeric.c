/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:56:41 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/02/15 19:10:11 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	lenght;
	int	i;
	int	check;

	check = 1;
	lenght = 0;
	i = 0;
	while (str[lenght])
		lenght++;
	while (i < lenght)
	{
		if ((str[i] < '0') || (str[i] > '9'))
			check = 0;
		i++;
	}
	return (check);
}
