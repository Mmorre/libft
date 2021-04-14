/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:42:35 by math              #+#    #+#             */
/*   Updated: 2021/04/14 11:46:32 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_fin(char const *s1, char const *set)
{
	int	fin;
	int	s;

	fin = ft_strlen(s1) - 1;
	s = 0;
	while (set[s])
	{
		if (set[s] == s1[fin])
		{
			fin--;
			if (fin == 0)
				return (-1);
			s = -1;
		}
		s++;
	}
	return (fin);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*new;
	unsigned int	start;
	int				fin;
	int				s;

	start = 0;
	s = 0;
	if (!s1 || !set)
		return (0);
	while (set[s])
	{
		if (set[s] == s1[start])
		{
			start++;
			s = -1;
		}
		s++;
	}
	fin = ft_fin(s1, set);
	if ((int)start >= fin)
		fin = 0;
	else
		fin - fin - start + 1;
	new = ft_substr(s1, start, fin);
	return (new);
}
