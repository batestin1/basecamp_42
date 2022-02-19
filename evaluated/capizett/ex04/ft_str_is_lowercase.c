/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capizett <capizett@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:30:42 by capizett          #+#    #+#             */
/*   Updated: 2022/02/13 23:39:13 by capizett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 97 || *(str + i) > 122)
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
