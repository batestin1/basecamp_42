/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumontei <mumontei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:21:57 by mumontei          #+#    #+#             */
/*   Updated: 2022/02/10 17:22:30 by mumontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	size_string;

	size_string = 0;
	while (str[size_string] != '\0')
	{
		size_string++;
	}
	return (size_string);
}
