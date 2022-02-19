/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastro <mariananycastro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:42:53 by mcastro           #+#    #+#             */
/*   Updated: 2022/02/09 22:27:58 by mcastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	size;
	int	i;

	size = 0;
	while (dest[size])
		size++;
	i = 0;
	while (src[i])
	{
		dest[size] = src[i];
		i++;
		size++;
	}
	return (dest);
}
