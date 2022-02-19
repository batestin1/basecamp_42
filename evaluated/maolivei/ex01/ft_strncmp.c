/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:25:13 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/15 15:45:40 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	if (n > 0)
	{
		while ((s1[i] || s2[i]) && i < n)
		{
			if (s1[i] != s2[i])
			{
				diff = s1[i] - s2[i];
				break ;
			}
			i++;
		}
	}
	return (diff);
}
