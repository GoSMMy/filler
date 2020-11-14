#include "filler.h"

static int	get_sum(t_filler *filler, int x, int y)
{
	int sum;
	int touched;
	int	i;
	int	j;

	touched = 0;
	i = -1;
	sum = 0;
	while (++i < filler->shape->height)
	{
		j = -1;
		while (++j < filler->shape->width)
		{
			if (filler->board->map[i + x][j + y] == PLAYER &&
				filler->shape->map[i][j] == 1)
				touched++;
			if ((filler->board->map[i + x][j + y] == ENEMY &&
				filler->shape->map[i][j] == 1) || touched > 1)
				return (0);
			if (filler->shape->map[i][j] == 1 &&
				filler->board->map[i + x][j + y])
				sum += filler->board->map[i + x][j + y];
		}
	}
	return (touched == 1 ? sum : 0);
}

static int	dist_calculator(t_filler *filler, int x, int y)
{
	int i;
	int j;
	int result;

	i = -1;
	result = filler->board->width * filler->board->height;
	while (++i < filler->board->height)
	{
		j = -1;
		while (++j < filler->board->width)
		{
			if (filler->board->map[i][j] == ENEMY &&
			MANHATTAN_ALGO(x, y, i, j) < result)
				result = MANHATTAN_ALGO(x, y, i, j);
		}
	}
	return (result);
}

void		manh_distance_formater(t_filler *filler)
{
	int i;
	int j;

	i = -1;
	while (++i < filler->board->height)
	{
		j = -1;
		while (++j < filler->board->width)
		{
			if (filler->board->map[i][j] != PLAYER &&
				filler->board->map[i][j] != ENEMY)
				filler->board->map[i][j] = dist_calculator(filler, i, j);
		}
	}
}

void		get_cords(t_filler *filler)
{
	int i;
	int j;
	int sum;
	int min_sum;

	i = -1;
	min_sum = FT_MAX_INT;
	sum = 0;
	while (++i < filler->board->height)
	{
		j = -1;
		while (++j < filler->board->width)
		{
			if (i + filler->shape->height < filler->board->height &&
				j + filler->shape->width < filler->board->width)
				sum = get_sum(filler, i, j);
			if (sum && sum < min_sum)
			{
				min_sum = sum;
				filler->x = i;
				filler->y = j;
			}
		}
	}
}
