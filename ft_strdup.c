/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:21:21 by math              #+#    #+#             */
/*   Updated: 2021/04/14 12:02:37 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;

	new = malloc(sizeof(char) * (ft_strlen(s) + 1 ));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s, (ft_strlen(s) + 1 ));
	return (new);
}
