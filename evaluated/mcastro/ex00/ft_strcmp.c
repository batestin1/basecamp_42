/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastro <mariananycastro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:53:57 by mcastro           #+#    #+#             */
/*   Updated: 2022/02/09 15:26:19 by mcastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	f_size(char *string)
{
	int	size;

	size = 0;
	while (string[size])
		size++;
	return (size);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	s1_size;
	int	s2_size;
	int	i;

	s1_size = f_size(s1);
	s2_size = f_size(s2);
	if (s1_size < s2_size)
		return (-1);
	else if (s1_size > s2_size)
		return (1);
	else
	{
		i = 0;
		while (s1[i])
		{
			if (s1[i] == s2[i])
				i++;
			else if (s1[i] > s2[i])
				return (1);
			else
				return (-1);
		}
		return (0);
	}
}
