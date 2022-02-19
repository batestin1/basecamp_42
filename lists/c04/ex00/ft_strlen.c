/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:26:08 by macypria          #+#    #+#             */
/*   Updated: 2022/02/17 20:27:54 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	length;
	char			current_char;

	length = 0;
	while (1)
	{
		current_char = str[length];
		if (current_char == '\0')
			break ;
		length++;
	}
	return (length);
}
