/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 01:27:31 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/21 15:44:51 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}
