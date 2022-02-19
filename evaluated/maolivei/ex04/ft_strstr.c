/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:29:16 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/15 15:53:08 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlen(char *to_find);

unsigned int	ft_strlen(char *to_find)
{
	unsigned int	i;

	i = 0;
	while (to_find[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	match;
	unsigned int	find_len;

	i = 0;
	match = 0;
	find_len = ft_strlen(to_find);
	while (str[i])
	{
		while (str[i] == *to_find && str[i])
		{
			match++;
			to_find++;
			i++;
		}
		if (match == find_len)
			break ;
		to_find -= match;
		match = 0;
		i++;
	}
	if (match != find_len)
		return (0);
	return (str += i - match);
}
