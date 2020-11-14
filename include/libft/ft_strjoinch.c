/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocathern <ocathern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:14:39 by ocathern          #+#    #+#             */
/*   Updated: 2020/02/24 15:15:40 by ocathern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinch(char const *s1, char c)
{
	char	*res;
	size_t	i;
	size_t	s1_len;

	if (!s1 || !c)
		return (NULL);
	s1_len = ft_strlen(s1);
	res = ft_strnew(s1_len + 1);
	if (!res)
		return (NULL);
	i = -1;
	while (++i < s1_len)
		*(res + i) = *(s1 + i);
	*(res + i) = c;
	return (res);
}
