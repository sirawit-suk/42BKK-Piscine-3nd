/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:07:30 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/28 02:34:59 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	negative(long int *num)
{	
	if (*num < 0)
	{
		*num *= -1;
		write(1, "-", 1);
	}
}

void	ft_putnbr(int nb)
{
	long int	num;
	long int	digit;
	char		temp;
	long int	*p;

	num = nb;
	digit = 1;
	while (num / 10 != 0)
	{
		num = num / 10;
		digit = digit * 10;
	}
	p = &num;
	num = nb;
	negative(p);
	while (digit != 0)
	{
		temp = (num / digit) + '0';
		num = num % digit;
		digit /= 10;
		write(1, &temp, 1);
	}
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
}
