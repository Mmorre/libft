/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 11:21:18 by math              #+#    #+#             */
/*   Updated: 2021/04/14 12:56:16 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *b, const void *a, size_t n)
{
	unsigned char	*src;
	char			*dest;
	int				i;

	i = -1;
	src = (unsigned char *)a;
	dest = (char *)b;
	if (a == 0 && b == 0)
		return (NULL);
	else if (dest > (char *)src)
	{
		while (n > 0)
		{
			--n;
			dest[n] = src[n];
		}
	}
	else if (dest <= (char *)src)
	{
		while ((size_t)++i < n)
			dest[i] = src[i];
	}
	return (dest);
}
