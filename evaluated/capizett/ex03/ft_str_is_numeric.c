/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capizett <capizett@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:01:54 by capizett          #+#    #+#             */
/*   Updated: 2022/02/13 23:27:29 by capizett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 48 || *(str + i) > 57)
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
