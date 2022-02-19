/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomiyos <etomiyos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:09:42 by etomiyos          #+#    #+#             */
/*   Updated: 2022/02/17 13:30:23 by etomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alpha(char a)
{
	if ((a >= 48 && a <= 57) || (a >= 65 && a <= 90) || (a >= 97 && a <= 122))
	{
		return (1);
	}
	return (0);
}

int	lower_case(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	return (0);
}

int	upper_case(char a)
{
	if ((a >= 'A' && a <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || !is_alpha (str[i - 1]))
		{
			if (lower_case (str[i]))
			{
				str[i] = str[i] - 32;
			}
		}
		else
		{
			if (upper_case (str[i]))
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}
