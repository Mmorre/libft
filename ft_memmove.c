/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 11:21:18 by math              #+#    #+#             */
/*   Updated: 2021/01/05 11:34:12 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp1;
	unsigned char *tmp2;

	tmp1 = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;

	if ((dst < (src + len)) && (src < dst))
	{
		while (len)
		{
			tmp1[len - 1] = tmp2[len - 1];
			len--;
		}
	}
	else
		dst = ft_memcpy(dst, src,len);
	return (dst);
}