/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:23:45 by macypria          #+#    #+#             */
/*   Updated: 2022/02/16 22:25:06 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	int				compare;

	i = 0;
	compare = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			compare = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (compare);
}
