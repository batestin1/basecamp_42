/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumontei <mumontei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:09:17 by mumontei          #+#    #+#             */
/*   Updated: 2022/02/10 17:10:33 by mumontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	swap;

	swap = *b;
	*b = *a;
	*a = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	do_swap;

	do_swap = 1;
	i = 0;
	size = size - 1;
	while (do_swap)
	{
		do_swap = 0;
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				swap(&tab[i], &tab[i + 1]);
				do_swap++;
			}
			i++;
		}
	}
}
