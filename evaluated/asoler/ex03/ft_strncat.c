/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:53:36 by asoler            #+#    #+#             */
/*   Updated: 2022/02/16 03:09:38 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count(char	*s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				size;

	size = count(dest);
	i = 0;
	while (i < nb)
	{
		dest[size] = src[i];
		i++;
		size++;
		if (src[i] == '\0')
		{
			dest[size] = '\0';
			return (dest);
		}
	}
	dest[size] = '\0';
	return (dest);
}
#include <string.h>
int main(void)
{
	char	src[50] = "Hello";
	char	dest[50] = " 42!";

	//printf("Original: %s\n", strncat(src, dest, 4));
	printf("Fake: %s\n", ft_strncat(src, dest, 4));
}