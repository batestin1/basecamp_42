/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capizett <capizett@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:57:55 by capizett          #+#    #+#             */
/*   Updated: 2022/02/14 06:16:10 by capizett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnupcase(char *str, unsigned int n);
int		ft_strn_is_alpha(char *str, unsigned int n);
int		ft_char_is_alfanum(char *str, unsigned int n);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	countb;

	i = 0;
	countb = 0;
	while (*(str + i) != '\0')
	{
		while (ft_char_is_alfanum((str + i), 1))
		{
			countb++;
			i++;
		}
		if (ft_strn_is_alpha((str + i - countb), 1))
		{
			ft_strnupcase((str + i - countb), 1);
			i++;
			countb = 0;
		}
		else
		{
			i++;
			countb = 0;
		}
	}
	return (str);
}

char	*ft_strnupcase(char *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(str + i) != '\0' && i <= (n - 1))
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}
	return (str);
}

int	ft_strn_is_alpha(char *str, unsigned int n)
{
	unsigned int	i;
	int				result;

	result = 1;
	i = 0;
	while (*(str + i) != '\0' && i <= (n - 1))
	{
		if (
			(*(str + i) < 65 || *(str + i) > 90)
			&& (*(str + i) < 97 || *(str + i) > 122))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}

int	ft_char_is_alfanum(char *str, unsigned int n)
{
	int				result;
	unsigned int	i;
	char			c;

	c = '\0';
	result = 0;
	i = 0;
	while (*(str + i) != '\0' && i <= (n - 1))
	{
		if ((*(str + i) >= 48 && *(str + i) <= 57)
			|| (*(str + i) >= 65 && *(str + i) <= 90)
			|| (*(str + i) >= 97 && *(str + i) <= 122))
		{
			result = 1;
		}
		else if (*(str + i) == c)
		{
			result = 1;
		}
		i++;
	}
	return (result);
}
