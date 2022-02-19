/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasso-t <tlasso-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:39:18 by tlasso-t          #+#    #+#             */
/*   Updated: 2022/02/18 20:48:57 by tlasso-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_substring(char *str, char *to_find)
{
	unsigned int	i;

	i = 0;
	while (to_find[i])
	{
		if (to_find[i] != str[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;

	if (!(*to_find))
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] == *to_find)
			if (ft_is_substring(&str[i], to_find) == 1)
				return (&str[i]);
		i++;
	}	
	return ((void *)0);
}
