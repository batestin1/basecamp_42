/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <rvieira@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:45:53 by rvieira           #+#    #+#             */
/*   Updated: 2022/02/10 16:45:53 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
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
