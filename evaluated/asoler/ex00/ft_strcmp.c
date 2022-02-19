/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:54:04 by asoler            #+#    #+#             */
/*   Updated: 2022/02/16 02:58:18 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	int	result;
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char *s1;
	char *s2;
	
	s1 = "abcd";
	s2 = "abcdv";
	printf("s1: %s, s2: %s\n", s1, s2);
	printf("%d\n", ft_strcmp(s1, s2));
	return(0);
}