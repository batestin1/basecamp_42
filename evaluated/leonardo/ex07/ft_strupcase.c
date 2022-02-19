/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:52:55 by lschimud          #+#    #+#             */
/*   Updated: 2022/02/17 18:59:11 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] -32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
