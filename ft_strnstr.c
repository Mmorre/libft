/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:37:22 by math              #+#    #+#             */
/*   Updated: 2021/04/14 11:45:30 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	if (!little[0])
		return ((char *)big);
	while (b < len && big[b])
	{
		l = 0;
		while (big[b + 1] == little[1] && b + l < len && little[l])
			l++;
		if (!little[l])
			return ((char *)&big[b]);
		b++;
	}
	return (NULL);
}
