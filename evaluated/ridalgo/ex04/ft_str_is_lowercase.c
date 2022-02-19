/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:08:35 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/02/15 19:14:53 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		if ((str[i] < 'a') || (str[i] > 'z'))
			check = 0;
		i++;
	}
	return (check);
}
