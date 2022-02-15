/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:11:28 by wharinas          #+#    #+#             */
/*   Updated: 2022/01/17 20:59:03 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	no_sort;
	int	index;
	int	temp;

	no_sort = 0;
	temp = 0;
	size--;
	while (no_sort == 0)
	{
		no_sort = 1;
		index = 0;
		while (index++ < size)
		{
			if (tab[index - 1] > tab[index])
			{
				temp = tab[index];
				tab[index] = tab[index - 1];
				tab[index - 1] = temp;
				no_sort = 0;
			}
		}
	}
}
