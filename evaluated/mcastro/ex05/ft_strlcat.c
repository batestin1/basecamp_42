/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastro <mariananycastro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:04:38 by mcastro           #+#    #+#             */
/*   Updated: 2022/02/10 15:04:40 by mcastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				size_src;
	int				size_dest;
	unsigned int	i;
	unsigned int	current_size;

	if (size == 0)
		return (0);
	size_dest = 0;
	while (dest[size_dest])
		size_dest++;
	size_src = 0;
	while (src[size_src])
		size_src++;
	i = 0;
	current_size = size_dest;
	while (current_size <= size - 2 && src[i])
	{
		dest[current_size] = src[i];
		current_size++;
		i++;
	}
	dest[size - 1] = '\0';
	return (size_dest + size_src);
}
