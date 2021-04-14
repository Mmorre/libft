/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:24:24 by math              #+#    #+#             */
/*   Updated: 2021/04/14 12:03:12 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i_1;
	size_t	i_2;
	char	*new;

	i_1 = 0;
	i_2 = 0;
	if (!s1 || !s2)
		return (NULL);
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1 ));
	if (!new)
		return (NULL);
	while (s1[i_1])
	{
		new[i_1] = s1[i_1];
		i_1++;
	}
	while (s2[i_2])
	{
		new[i_1] = s2[i_2];
		i_1++;
		i_2++;
	}
	new[i_1] = '\0';
	return (new);
}
