/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:15:43 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/11 09:55:56 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *,
			size_t))
{
	t_list *cur;
	t_list *next;

	if (alst && *alst && del)
	{
		cur = *alst;
		while (cur)
		{
			next = cur->next;
			del(cur->content, cur->content_size);
			free(cur);
			cur = next;
		}
		*alst = NULL;
	}
}
