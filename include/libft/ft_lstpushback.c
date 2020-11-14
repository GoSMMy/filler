/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <nblackie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:14:27 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/14 10:33:43 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpushback(t_list **begin, t_list *new)
{
	if (begin && new)
	{
		if (!*begin)
			(*begin) = new;
		while ((*begin)->next)
			*begin = (*begin)->next;
		(*begin)->next = new;
	}
}
