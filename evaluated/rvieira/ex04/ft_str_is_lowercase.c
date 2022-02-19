/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <rvieira@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:45:34 by rvieira           #+#    #+#             */
/*   Updated: 2022/02/10 16:45:37 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122))
			a = 1;
		else
		{
			a = 0;
			return (a);
		}
		i++;
	}
	if (a == 0)
	{
		a = 1;
		return (a);
	}
	return (a);
}
