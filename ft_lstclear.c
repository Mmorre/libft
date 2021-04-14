/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:26:51 by math              #+#    #+#             */
/*   Updated: 2021/04/14 11:24:12 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*liste;
	t_list	*element;

	if (!lst || !del)
		return ;
	liste = *lst;
	while (liste)
	{
		element = liste ->next;
		del(liste->content);
		free(liste);
		liste = element;
	}
	*lst = NULL;
}
