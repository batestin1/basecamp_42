/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:24:14 by macypria          #+#    #+#             */
/*   Updated: 2022/02/17 01:46:41 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calculate_string_length(char *string)
{
	unsigned int	iterator;
	char			current_char;

	iterator = 0;
	while (1)
	{
		current_char = string[iterator];
		if (current_char == '\0')
			break ;
		iterator++;
	}
	return (iterator);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	destination_length;
	unsigned int	iterator;
	char			source_character;

	destination_length = calculate_string_length(dest);
	iterator = 0;
	source_character = src[0];
	while (source_character != '\0' && iterator < nb)
	{
		dest[destination_length + iterator] = source_character;
		iterator++;
		source_character = src[iterator];
	}
	dest[destination_length + iterator] = '\0';
	return (dest);
}
