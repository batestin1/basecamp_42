/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:58:13 by lschimud          #+#    #+#             */
/*   Updated: 2022/02/17 19:00:15 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z') 
		{
			i++;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
