/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:31:29 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 23:27:05 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "str_utility.h"
#include "file_utility.h"
#include <stdlib.h>

int	extract_file(t_info *info, t_index **index_key, int **max)
{
	int	i;
	int	n_row;

	n_row = 0;
	i = 0;
	if (!valid_first_line(info, &n_row))
		return (0);
	*index_key = (t_index *)malloc(sizeof(t_index) * (n_row + 1));
	while (i <= n_row)
	{
		index_key[0][i].begin = NULL;
		index_key[0][i++].end = NULL;
	}
	if (!valid_each_line(info, n_row, *index_key, max))
	{
		free(*index_key);
		return (0);
	}
	return (1);
}

int	process_file(t_info *info)
{
	int		*max;
	t_index	*index_key;

	max = NULL;
	index_key = NULL;
	if (!extract_file(info, &index_key, &max))
	{
		free(info->alpha);
		return (0);
	}
	write_down(info->alpha, index_key, max);
	free(max);
	free(info->alpha);
	free(index_key);
	return (1);
}

void	error_info(t_info *info)
{
	free(info);
	ft_puterr(INVALID);
}

void	valid_file(char *file_path)
{
	t_info	*info;	

	info = (t_info *)malloc(sizeof(t_info) * 1);
	info->fd = open(file_path, O_RDONLY);
	info->alpha = NULL;
	info->col = 0;
	if (info->fd < 0)
	{
		error_info(info);
		return ;
	}
	if (!process_file(info))
	{
		error_info(info);
		return ;
	}
	if (close(info->fd) < 0)
	{
		error_info(info);
		return ;
	}
	free(info);
	return ;
}
