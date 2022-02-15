/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utility_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:51:12 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 20:48:28 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

void	free_index(t_index *index_key)
{
	t_index	*buffer;

	buffer = index_key;
	while (index_key->begin != NULL)
	{
		ft_free_list(index_key);
		index_key++;
	}
	free(buffer);
}

void	free_each_line(t_index *index, int *max, int i)
{
	int	j;

	j = 0;
	while (j <= i)
	{
		ft_free_list(&index[j]);
		j++;
	}
	free(max);
}
