/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnomnob <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:09:33 by nnomnob           #+#    #+#             */
/*   Updated: 2022/01/18 14:01:32 by nnomnob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_out(int nb)
{
	long	j;
	long	lnb;
	int		i;
	char	nbch;

	i = 0;
	j = 1000000000;
	lnb = nb;
	if (lnb < 0)
	{
		lnb = lnb * -1;
		write (1, "-", 1);
	}
	while (j >= 1)
	{
		if ((lnb / j) >= 1)
		{
			nbch = ((lnb % (j * 10)) / j) + '0';
			write (1, &nbch, 1);
			i++;
		}
		j = j / 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb != 0)
	{
		print_out (nb);
	}
	else
		write (1, "0", 1);
}
