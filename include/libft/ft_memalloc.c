/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:04:38 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/08 15:18:30 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *res;

	if (size >= 18374686479671623680U)
		return (NULL);
	if ((res = (void*)malloc(sizeof(void) * (size + 1))))
	{
		ft_bzero(res, size + 1);
		return (res);
	}
	return (NULL);
}
