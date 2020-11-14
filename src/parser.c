/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocathern <ocathern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:33:20 by ocathern          #+#    #+#             */
/*   Updated: 2020/11/14 17:33:23 by ocathern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void			parse_shape(t_filler *filler, char *line)
{
	int		i;
	int		j;

	i = -1;
	while (++i < filler->shape->height && get_next_line(0, &line))
	{
		j = -1;
		while (++j < filler->shape->width)
			filler->shape->map[i][j] = line[j] == '.' ? 0 : 1;
		if (line != NULL)
			ft_strdel(&line);
	}
}

void			parse_board(t_filler *filler, char *line)
{
	int		i;
	int		j;
	char	*str;

	i = -2;
	while (++i < filler->board->height && get_next_line(0, &line))
	{
		j = -1;
		str = ft_strchr(line, ' ') + 1;
		while (++j < filler->board->width)
			if (str[j] == '.')
				filler->board->map[i][j] = 0;
			else if (ft_toupper(str[j]) == filler->ps)
				filler->board->map[i][j] = PLAYER;
			else if (ft_toupper(str[j]) == filler->es)
				filler->board->map[i][j] = ENEMY;
		if (line != NULL)
			ft_strdel(&line);
	}
}
