/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capizett <capizett@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:18:32 by capizett          #+#    #+#             */
/*   Updated: 2022/02/13 00:13:07 by capizett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i <= (n -1))
	{
		*(dest + i) = *(src + i);
		i++;
		if (*(src + i) == '\0' && i <= (n - 1))
		{
			*(dest + i) = *(src + i);
		}
	}
	if (i < (n - 1))
	{
		i++;
		while (i <= (n - 1))
		{
			*(dest + i) = '\0';
			i++;
		}
	}
	return (dest);
}
