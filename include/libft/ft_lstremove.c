/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <nblackie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:40:36 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/14 10:34:35 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstremove(t_list **begin, t_list *lst,
		int (*cmp(t_list*, t_list*)), void (*del(t_list*)))
{
	t_list *current;
	t_list *previous;
	t_list *nextt;

	if (*begin && begin && cmp && del)
	{
		current = *begin;
		previous = current;
		while (current)
		{
			if ((*cmp)(current, lst) == 0)
			{
				nextt = current->next;
				del(current);
				previous->next = nextt;
				current = nextt;
			}
			else
				current = current->next;
		}
	}
}
