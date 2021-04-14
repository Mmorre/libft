/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:14:07 by math              #+#    #+#             */
/*   Updated: 2021/04/14 11:23:38 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst;

	if (!alst || !new)
		return ;
	else if (!(*alst))
		*alst = new;
	else
	{
		lst = *alst;
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = new;
	}
}
