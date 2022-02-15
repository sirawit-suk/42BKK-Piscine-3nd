/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:23:50 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/27 03:14:50 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	abs(int x)
{
	if (x < 0)
		return (x * -1);
	return (x);
}	

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	array = 0;
	if (min >= max)
		return (array);
	array = malloc(sizeof(int) * abs(max - min));
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
