/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 09:43:29 by math              #+#    #+#             */
/*   Updated: 2021/01/08 09:55:41 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*occurrence;

	occurrence = NULL;
	while (*s)
	{
		if (*s == (char)c)
			occurrence = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char*)s);
	return (occurrence);
}