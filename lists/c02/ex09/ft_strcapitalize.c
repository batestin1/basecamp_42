/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:28:07 by macypria          #+#    #+#             */
/*   Updated: 2022/02/16 16:11:47 by macypria         ###   ########.fr       */
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
