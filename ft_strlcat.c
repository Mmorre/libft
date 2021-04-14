/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:47:39 by mmorre            #+#    #+#             */
/*   Updated: 2021/04/14 12:41:21 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	size;

	if (ft_strlen(dst) < dstsize)
		size = ft_strlen(src) + ft_strlen(dst);
	else
		size = dstsize + ft_strlen(src);
	j = 0;
	while (dst[j] && dstsize)
	{
		j++;
		dstsize--;
	}
	i = 0;
	while (src[i] && i < dstsize - 1 && dstsize)
	{
		dst[j + i] = src[i];
		i++;
	}
	if (dstsize)
		dst[j + i] = '\0';
	return (size);
}
