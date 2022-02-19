/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:19:04 by mumontei          #+#    #+#             */
/*   Updated: 2022/02/10 19:05:38 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{	
	int	size_string;
	int	i;

	size_string = 0;
	while (str[size_string] != '\0')
	{
		size_string++;
	}
	i = 0;
	while (i <= size_string)
	{
		ft_putchar(str[i]);
		i++;
	}
}
