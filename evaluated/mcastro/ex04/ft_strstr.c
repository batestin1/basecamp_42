/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastro <mariananycastro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:53:09 by mcastro           #+#    #+#             */
/*   Updated: 2022/02/10 19:53:10 by mcastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		z;
	int		size;
	char	*found;

	size = 0;
	while (to_find[size])
		size++;
	i = 0;
	z = 0;
	while (str[i])
	{
		if (to_find[z] && str[i] == to_find[z])
		{
			found = to_find;
			z++;
		}
		else
		{
			found = 0;
			z = 0;
		}
		i++;
	}
	return (found);
}
