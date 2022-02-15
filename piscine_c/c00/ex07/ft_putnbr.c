/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:58:23 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/13 18:57:33 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		count_digit;
	int		buffer;
	char	temp_char;

	count_digit = 1;
	buffer = nb;
	while (buffer / 10 != 0)
	{
		buffer = buffer / 10;
		count_digit = count_digit * 10;
	}	
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (count_digit != 0)
	{
		temp_char = nb / count_digit + '0';
		nb = nb % count_digit;
		write(1, &temp_char, 1);
		count_digit /= 10;
	}
}
