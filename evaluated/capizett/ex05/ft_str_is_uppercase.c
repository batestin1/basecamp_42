/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capizett <capizett@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:30:42 by capizett          #+#    #+#             */
/*   Updated: 2022/02/13 23:55:15 by capizett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 65 || *(str + i) > 90)
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
