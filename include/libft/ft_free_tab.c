/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocathern <ocathern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:53:56 by ocathern          #+#    #+#             */
/*   Updated: 2020/02/24 15:56:50 by ocathern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_free_tab(void ***arr)
{
	void	**temp;

	if (!(*arr))
		return (1);
	temp = *arr;
	while (**arr)
	{
		ft_memdel(*arr);
		(*arr)++;
	}
	free(temp);
	temp = NULL;
	*arr = temp;
	return (0);
}
