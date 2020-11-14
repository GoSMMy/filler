/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocathern <ocathern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:33:17 by ocathern          #+#    #+#             */
/*   Updated: 2020/11/14 17:36:11 by ocathern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static t_board	*init_plateau(void)
{
	t_board *board;

	board = NULL;
	if ((board = (t_board *)ft_memalloc(sizeof(t_board))))
	{
		board->width = 0;
		board->height = 0;
		board->map = NULL;
	}
	return (board);
}

static t_shape	*init_piece(void)
{
	t_shape		*shape;

	shape = NULL;
	if ((shape = (t_shape *)ft_memalloc(sizeof(t_shape))))
	{
		shape->height = 0;
		shape->width = 0;
		shape->map = NULL;
	}
	return (shape);
}

t_filler		*init_filler(void)
{
	t_filler	*filler;
	t_board		*board;
	t_shape		*shape;

	filler = NULL;
	if ((filler = (t_filler *)ft_memalloc(sizeof(t_filler))) &&
		(board = init_plateau()) &&
		(shape = init_piece()))
	{
		filler->ps = 0;
		filler->es = 0;
		filler->x = 0;
		filler->y = 0;
		filler->board = board;
		filler->shape = shape;
	}
	return (filler);
}

int				init_players(t_filler *filler, char *line)
{
	while (get_next_line(0, &line) > 0)
	{
		if (line && !ft_strncmp(line, "$$$ exec", 8))
		{
			filler->ps = (ft_strstr(line, LOGIN) &&
						ft_strstr(line, "p1")) ? 'O' : 'X';
			filler->es = (ft_strstr(line, LOGIN) &&
						ft_strstr(line, "p1")) ? 'X' : 'O';
			break ;
		}
		if (line)
			ft_strdel(&line);
	}
	return (filler->ps && filler->es ? 1 : 0);
}
