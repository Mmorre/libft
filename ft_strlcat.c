/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:47:39 by mmorre            #+#    #+#             */
/*   Updated: 2021/04/14 11:42:02 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	count_dst;
	size_t	count_src;

	i = 0;
	count_dst = ft_strlen(dst);
	count_src = ft_strlen(src);
	while ((i < dstsize - count_dst - 1) && (dstsize > count_dst) && src[i])
	{
		dst[count_dst + i] = src[i];
		i++;
	}
	dst[count_dst + i] = '\0';
	if (dstsize <= count_dst)
		count_dst = dstsize;
	return (count_dst + count_src);
}
