/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnomnob <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:08:47 by nnomnob           #+#    #+#             */
/*   Updated: 2022/01/18 13:51:14 by nnomnob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_out(int *an, int n)
{
	int		i;
	char	c;

	i = -1;
	while (++i < n)
	{
		c = *(an + i) + '0';
		write (1, &c, 1);
	}
}

int	check_diff(int j, int n, int *an, int *fst)
{
	int	chk;
	int	mod;
	int	i;

	chk = 0;
	mod = 1;
	i = n;
	while (--i >= 0)
	{
		*(an + i) = ((j / mod) % 10);
		if ((n - i) >= 2 && n != 1 && (an[i] >= an[i + 1]))
			chk = 1;
		mod = mod * 10;
	}
	if (j / mod > 0)
		return (1);
	if (chk == 0)
	{
		if (*fst != 0)
			write(1, ", ", 2);
		*fst = 1;
		print_out(an, n);
	}
	return (0);
}

void	ft_print_combn(int n)
{
	int	an[10];
	int	j;
	int	fst;

	fst = 0;
	j = -1;
	while (++j <= 999999999)
	{
		if (check_diff(j, n, an, &fst) == 1)
			break ;
	}
}
