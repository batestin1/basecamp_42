/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:03:56 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/02/15 19:09:51 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if ((str[i] < 'A') || ((str[i] > 'Z') && (str[i] < 'a'))
			|| (str[i] > 'z'))
				check = 0;
		i++;
	}
	return (check);
}
