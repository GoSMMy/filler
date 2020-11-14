#include "filler.h"

static int	fill_parameters(t_filler *filler, char *line)
{
	char **strsplit;

	if (!(strsplit = ft_strsplit(line, ' ')))
		return (1);
	if (!ft_strcmp(strsplit[0], "Plateau"))
	{
		filler->board->height = ft_atoi(strsplit[1]);
		filler->board->width = ft_atoi(strsplit[2]);
	}
	else if (!ft_strcmp(strsplit[0], "Piece"))
	{
		filler->shape->height = ft_atoi(strsplit[1]);
		filler->shape->width = ft_atoi(strsplit[2]);
	}
	ft_free_tab((void ***)&strsplit);
	return (0);
}

int			create_map(t_filler *filler, char *line)
{
	int i;

	if (fill_parameters(filler, line))
		return (1);
	if (!(filler->board->map =
	(int **)ft_memalloc(sizeof(int *) * (filler->board->height + 1))))
		return (1);
	i = -1;
	while (++i < filler->board->height)
	{
		if (!(filler->board->map[i] = (int *)ft_memalloc(sizeof(int) *
				(filler->board->width))))
		{
			ft_memdel((void **)filler->board->map);
			return (1);
		}
	}
	return (0);
}

int			create_piece(t_filler *filler, char *line)
{
	int i;

	if (fill_parameters(filler, line))
		return (1);
	if (!(filler->shape->map =
	(int **)ft_memalloc(sizeof(int *) * (filler->shape->height + 1))))
		return (1);
	i = -1;
	while (++i < filler->shape->height)
	{
		if (!(filler->shape->map[i] = (int *)ft_memalloc(sizeof(int) *
				(filler->shape->width))))
		{
			ft_memdel((void **)filler->shape->map);
			return (1);
		}
	}
	return (0);
}
