/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastro <mariananycastro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:31:33 by mcastro           #+#    #+#             */
/*   Updated: 2022/02/09 22:31:35 by mcastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				size_dest;

	size_dest = 0;
	while (dest[size_dest])
		size_dest++;
	i = 0;
	while (i < nb)
	{
		dest[size_dest] = src[i];
		size_dest++;
		i++;
	}
	return (dest);
}
