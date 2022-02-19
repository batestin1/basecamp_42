/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 03:31:29 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/15 02:44:37 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] != '\0' && (str[0] >= 'a' && str[0] <= 'z'))
		str[0] = str[0] - 32;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && ((str[i - 1] < 'a' && \
		str[i - 1] > 'Z') || (str[i - 1] < 'A' && str[i - 1] > '9') || \
		str[i - 1] < '0' || str[i - 1] > 'z'))
			str[i] = str[i] - 32;
		if ((str[i] >= 'A' && str[i] <= 'Z') && ((str[i - 1] >= 'a' && \
		str[i - 1] <= 'z') || (str[i - 1] >= 'A' && str[i - 1] <= 'Z') \
		|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
