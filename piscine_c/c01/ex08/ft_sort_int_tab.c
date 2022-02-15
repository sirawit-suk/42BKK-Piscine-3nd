/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:16:36 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/16 22:17:12 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	swap;

	j = 0;
	swap = 0;
	while (j < size)
	{
		i = 1;
		while (i < size - j)
		{
			if (*(tab + i - 1) > *(tab + i))
			{
				temp = *(tab + i);
				*(tab + i) = *(tab + i - 1);
				*(tab + i - 1) = temp;
				swap = 1;
			}
			i++;
		}
		j++;
		if (swap == 0)
			break ;
	}
}
