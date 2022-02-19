/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:18:32 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/02/15 19:33:57 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
		if ((str[i] < 'A') || (str[i] > 'Z'))
			check = 0;
		i++;
	}
	return (check);
}
