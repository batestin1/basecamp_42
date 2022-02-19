/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:53:55 by asoler            #+#    #+#             */
/*   Updated: 2022/02/16 03:00:34 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				result;
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && n >= i)
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1 = "ac";
	char	*s2 = "a";

	printf("Original: %d\n", strncmp(s1, s2, 10));
	printf("Fake: %d\n", ft_strncmp(s1, s2, 10));
}
