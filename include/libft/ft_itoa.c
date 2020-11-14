/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:23:19 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/06 15:08:21 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(unsigned int n)
{
	int		len;

	len = 0;
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int				len;
	char			*res;
	unsigned int	num;

	if (n == 0 && (res = ft_strnew(1)))
	{
		res[0] = '0';
		return (res);
	}
	num = n < 0 ? -n : n;
	len = n > 0 ? get_len(num) : (get_len(num) + 1);
	if ((res = ft_strnew(len)))
	{
		if (n < 0)
			res[0] = '-';
		while (num > 0)
		{
			len--;
			res[len] = num % 10 + '0';
			num = num / 10;
		}
	}
	return (res);
}
