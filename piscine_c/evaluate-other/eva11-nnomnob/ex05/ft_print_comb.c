/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnomnob <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:54:42 by nnomnob           #+#    #+#             */
/*   Updated: 2022/01/18 14:32:04 by nnomnob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_out(int i, int j, int k, int *fst)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = i + '0';
	c2 = j + '0';
	c3 = k + '0';
	if (*fst != 0)
	{	
		write (1, ", ", 2);
	}
	write (1, &c1, 1);
	write (1, &c2, 1);
	write (1, &c3, 1);
	*fst = 1;
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;
	int	fst;

	fst = 0;
	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 9)
			{
				if (i != j && j != k && i < j && j < k)
				{
					print_out (i, j, k, &fst);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
