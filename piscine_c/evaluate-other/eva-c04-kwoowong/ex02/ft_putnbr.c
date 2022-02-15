/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:09:43 by kwoowong          #+#    #+#             */
/*   Updated: 2022/01/14 13:11:04 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;

	c = n + 48;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	newnb;

	newnb = nb;
	if (newnb < 0)
	{
		ft_putchar(-3);
		newnb = newnb * -1;
	}
	if (newnb <= 9)
	{
		ft_putchar(newnb);
	}
	else
	{
		ft_putnbr(newnb / 10);
		ft_putnbr(newnb % 10);
	}
}
