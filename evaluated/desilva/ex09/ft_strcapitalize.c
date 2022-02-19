/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 00:00:45 by desilva           #+#    #+#             */
/*   Updated: 2022/02/12 03:33:28 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	is_num(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{	
		if (is_alpha(str[index]) || is_num(str[index]))
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] -= 32;
			index++;
			while (is_alpha(str[index]) || is_num(str[index]))
			{
				if (str[index] >= 'A' && str[index] <= 'Z')
					str[index] += 32;
				index++;
			}
		}
		index ++;
	}
	return (str);
}
