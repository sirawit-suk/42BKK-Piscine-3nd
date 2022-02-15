/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_down.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:33:23 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/02/01 19:44:37 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "str_utility.h"
#include "file_utility.h"
#include <stdlib.h>

void	small_loop(char *info, t_index *key, int *xy_begin, int *xy_end)
{
	t_list	*pointer_list;
	t_list	*temp_list;
	int		coor[2];

	coor[1] = 0;
	while (key->begin != NULL)
	{
		pointer_list = key->begin;
		coor[0] = 0;
		while (pointer_list != NULL)
		{
			if (coor[0] >= xy_begin[0] && coor[0] <= xy_end[0]
				&& coor[1] >= xy_begin[1] && coor[1] <= xy_end[1])
				ft_putchar(info[2]);
			else
				ft_putchar(pointer_list->c);
			temp_list = pointer_list;
			pointer_list = pointer_list->next;
			free(temp_list);
			coor[0]++;
		}
		ft_putchar('\n');
		coor[1]++;
		key++;
	}
}

void	write_down(char *info, t_index *key, int *max)
{
	int	xy_begin[2];
	int	xy_end[2];

	xy_begin[0] = max[2] - max[0] + 1;
	xy_begin[1] = max[1] - max[0] + 1;
	xy_end[0] = max[2];
	xy_end[1] = max[1];
	small_loop(info, key, xy_begin, xy_end);
}
