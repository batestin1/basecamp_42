/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:20:58 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/02/15 19:21:43 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
		if ((str[i] < ' ') || (str[i] > '~'))
			check = 0;
		i++;
	}
	return (check);
}
