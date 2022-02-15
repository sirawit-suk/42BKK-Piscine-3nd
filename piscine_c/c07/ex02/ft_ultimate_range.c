/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:44:01 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/27 17:38:59 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	low;

	low = min;
	array = 0;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	array = malloc(sizeof(int) * (max - min));
	if (array == 0)
		return (-1);
	*range = array;
	i = 0;
	while (low < max)
	{
		array[i] = low;
		low++;
		i++;
	}
	return (max - min);
}
