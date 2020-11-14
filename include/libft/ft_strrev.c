/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 08:51:12 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/11 08:59:08 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	*begin;
	char	*end;
	char	temp;
	int		length;

	if (str)
	{
		begin = str;
		length = 0;
		while (str[length] != '\0')
			length++;
		end = str + length - 1;
		while (end > begin)
		{
			temp = *end;
			*end-- = *begin;
			*begin++ = temp;
		}
	}
	return (str);
}
