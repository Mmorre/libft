/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:54:20 by math              #+#    #+#             */
/*   Updated: 2021/04/14 11:56:06 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_int(unsigned int pos, int len_int)
{
	int	result;

	while (pos >= 10)
	{
		result = pos % 10;
		pos = (pos - result) / 10;
		len_int++;
	}
	len_int++;
	return (len_int);
}

static char	*ft_intchar(unsigned int pos, int len_int, int signe)
{
	char	*str;
	int		result;

	str = malloc(sizeof(char) * (len_int + 1));
	if (!str)
		return (NULL);
	str[len_int] = '\0';
	len_int--;
	while (pos >= 10)
	{
		result = pos % 10;
		pos = (pos - result) / 10;
		str[len_int] = result + '0';
		len_int--;
	}
	str[len_int] = pos + '0';
	if (signe == -1)
		str[--len_int] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int				signe;
	int				len_int;
	unsigned int	pos;

	len_int = 0;
	signe = -1;
	if (n < 0)
	{
		signe = -1;
		pos = (unsigned int) - n;
		len_int++;
	}
	else
		pos = n;
	len_int = ft_len_int(pos, len_int);
	return (ft_intchar(pos, len_int, signe));
}
