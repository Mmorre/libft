/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:37:22 by math              #+#    #+#             */
/*   Updated: 2021/04/14 12:59:31 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*need;
	size_t	i;
	size_t	len_need;

	hay = (char *)haystack;
	need = (char *)needle;
	i = 0;
	if (need[i] == 0)
		return (hay);
	len_need = ft_strlen(need);
	while (hay[i] && len_need <= len)
	{
		if (hay[i] == *need && ft_memcmp(&hay[i], need, len_need) == 0)
			return (&hay[i]);
		i++;
		len--;
	}
	return (NULL);
}
