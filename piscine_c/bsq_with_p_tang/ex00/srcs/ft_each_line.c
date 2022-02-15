/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_each_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 01:43:57 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/02 14:11:54 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "str_utility.h"
#include "file_utility.h"
#include <stdlib.h>

int	ft_neighbor_check(t_index *index, int row, int col, int self);

int	check_char(char *alpha, char c)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if (alpha[i] == c)
			return (i ^ 1);
		i++;
	}
	return (-1);
}

void	assign_max(int *max, int row, int col, int size)
{
	max[0] = size;
	max[1] = row;
	max[2] = col;
}

int	valid_column(t_info *info, int col)
{
	if (info->col == 0)
	{
		info->col = col;
	}
	if (col == 0 || col != info->col)
		return (0);
	return (1);
}

int	valid_linked_list(t_info *info, t_index *index, int row, int *max)
{
	int		col;
	int		tmp;
	int		byte_read;
	char	buffer[1];

	col = 0;
	byte_read = 1;
	while (byte_read > 0)
	{
		byte_read = read(info->fd, buffer, 1);
		if (buffer[0] == '\n')
			break ;
		tmp = check_char(info->alpha, buffer[0]);
		if (tmp < 0)
			return (0);
		tmp = ft_neighbor_check(index, row, col, tmp);
		if (tmp > *max && tmp > 0)
			assign_max(max, row, col, tmp);
		ft_list_push_back(&index[row], tmp, buffer[0]);
		col++;
	}
	if (!valid_column(info, col))
		return (0);
	return (1);
}

int	valid_each_line(t_info *info, int n_row, t_index *index, int **max)
{
	int		i;
	int		byte_read;
	char	buffer[1];

	*max = (int *)malloc(sizeof(int) * 3);
	assign_max(*max, -1, -1, -1);
	i = 0;
	while (i < n_row)
	{
		if (!valid_linked_list(info, index, i, *max))
		{
			free_each_line(index, *max, i);
			return (0);
		}
		i++;
	}
	byte_read = read(info->fd, buffer, 1);
	if (byte_read > 0)
	{
		free_each_line(index, *max, 1);
		return (0);
	}
	return (1);
}
