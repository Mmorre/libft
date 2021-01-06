/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 11:41:43 by mmorre            #+#    #+#             */
/*   Updated: 2021/01/06 11:54:09 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *tmp1;
	unsigned char *tmp2;
	
	tmp1 = (unsigned char*)s1;
	tmp2 = (unsigned char*)s2;

	while(n)
	{
		if(*tmp1 != *tmp2)
			return (*tmp1 - *tmp2);
		tmp1++;
		tmp2++;
		n--;
	}
	return (0);
}