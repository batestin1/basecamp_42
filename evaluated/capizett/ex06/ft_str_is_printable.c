/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capizett <capizett@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:30:42 by capizett          #+#    #+#             */
/*   Updated: 2022/02/14 00:07:11 by capizett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 32 || *(str + i) > 126)
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
