/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnomnob <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:34:27 by nnomnob           #+#    #+#             */
/*   Updated: 2022/01/18 14:25:36 by nnomnob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_out(int fst, int i, int j)
{
	int		n1;
	int		n2;
	char	ch1;
	char	ch2;

	if (fst != 0)
		write (1, ", ", 2);
	n1 = i / 10;
	n2 = i % 10;
	ch1 = n1 + '0';
	ch2 = n2 + '0';
	write (1, &ch1, 1);
	write (1, &ch2, 1);
	write (1, " ", 1);
	n1 = j / 10;
	n2 = j % 10;
	ch1 = n1 + '0';
	ch2 = n2 + '0';
	write (1, &ch1, 1);
	write (1, &ch2, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	fst;

	fst = 0;
	i = 0;
	while (i <= 99)
	{
		j = 0;
		while (j <= 99)
		{
			if (i != j && i < j)
			{
				print_out (fst, i, j);
				fst = 1;
			}
			j++;
		}
		i++;
	}
}
