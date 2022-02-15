/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpengnit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:20:33 by kpengnit          #+#    #+#             */
/*   Updated: 2022/01/21 13:56:15 by kpengnit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort(int *data, int size)
{
	int	round;
	int	i;
	int	ceiling;

	round = 1;
	ceiling = size - 1;
	while (round < size)
	{
		i = 0;
		while (i < ceiling)
		{
			if (data[i] > data[i + 1])
				ft_swap(&data[i], &data[i + 1]);
			i++;
		}
		round++;
		ceiling--;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	first_index;
	int	last_index;

	last_index = size - 1;
	first_index = 0;
	ft_sort(tab, size);
}
