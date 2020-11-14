/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestrjoinch.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocathern <ocathern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:14:10 by ocathern          #+#    #+#             */
/*   Updated: 2020/02/24 15:18:06 by ocathern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_freestrjoinch(char *s1, char ch)
{
	char	*res;

	if (!(res = ft_strjoinch(s1, ch)))
		return (NULL);
	free(s1);
	s1 = NULL;
	return (res);
}
