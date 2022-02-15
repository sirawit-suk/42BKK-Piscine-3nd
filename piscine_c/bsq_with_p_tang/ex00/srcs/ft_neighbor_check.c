/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_neighbor_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:01:10 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 18:16:16 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

void	ft_getupper(int *upper, t_index index, int col)
{
	int		i;
	t_list	*tmp;

	tmp = index.begin;
	upper[0] = 0;
	upper[1] = 0;
	i = 0;
	while (i <= col && tmp != NULL)
	{
		if (i == (col - 1))
			upper[0] = tmp->value;
		if (i == col)
			upper[1] = tmp->value;
		tmp = tmp->next;
		i++;
	}
}

int	find_min(int i, int j, int k)
{
	int	min;

	min = i;
	if (j < i)
		min = j;
	if (k < j)
		min = k;
	return (min);
}

int	ft_neighbor_check(t_index *index, int row, int col, int self)
{
	int	min;
	int	left;
	int	upper[2];

	left = 0;
	upper[0] = 0;
	upper[1] = 0;
	if (self == 0)
		return (0);
	if (col > 0)
		left = index[row].end->value;
	if (row > 0)
		ft_getupper(upper, index[row - 1], col);
	min = find_min(upper[0], upper[1], left);
	return (self + min);
}
