/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:23:56 by macypria          #+#    #+#             */
/*   Updated: 2022/02/16 22:25:19 by macypria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				compare;

	i = 0;
	compare = 0;
	if (n > 0)
	{
		while ((s1[i] || s2[i]) && i < n)
		{
			if (s1[i] != s2[i])
			{
				compare = s1[i] - s2[i];
				break ;
			}
			i++;
		}
	}
	return (compare);
}
