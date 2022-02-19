/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:53:47 by asoler            #+#    #+#             */
/*   Updated: 2022/02/16 03:04:41 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char	*dest, const char	*src)
{
	int	i;
	int	size;

	size = count(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[size] = src[i];
		i++;
		size++;
	}
	dest[size] = src[i];
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char	src[] = "Hello";
	char	dest[] = "World";

	printf("Retorno: %s\n", ft_strcat(src, dest));
}

int main2(void)
{
	char	src[50] = "Hello";
	char	dest[50] = " 42!";

	printf("Retorno: %s\n", ft_strncat(src, dest, 4));
}