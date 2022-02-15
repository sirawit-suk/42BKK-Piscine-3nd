/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:14:35 by kwoowong          #+#    #+#             */
/*   Updated: 2022/01/24 15:51:11 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		++i;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	if (len <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < '!' || base[i] > '~')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return (0);
			++j;
		}
		++i;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	basenum;
	int	result[100];
	int	i;

	basenum = ft_check_base(base);
	if (basenum)
	{
		if (nbr < 0)
		{
			nbr = nbr * -1;
			ft_putchar('-');
		}
		if (nbr == 0)
			ft_putchar(base[0]);
		i = 0;
		while (nbr)
		{
			result[i] = nbr % basenum;
			nbr = nbr / basenum;
			++i;
		}
		while (--i >= 0)
			ft_putchar(base[result[i]]);
	}
}
