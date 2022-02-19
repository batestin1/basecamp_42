/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastro <mariananycastro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:08:55 by mcastro           #+#    #+#             */
/*   Updated: 2022/02/09 16:08:56 by mcastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	f_size(char *string, unsigned int n)
{
	int				size;
	unsigned int	i;

	i = 0;
	size = 0;
	while (string[i] && i <= n - 1)
	{
		size++;
		i++;
	}
	return (size);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (!s1[i])
			return (-1);
		else if (!s2[i])
			return (1);
		else
			i++;
	}
	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (-1);
		else
			i++;
	}
	return (0);
}
