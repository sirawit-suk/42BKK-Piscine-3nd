/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:12:08 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/18 20:32:59 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_dec_hex(int num, int mode)
{
	char	c;

	if (mode == 1)
	{
		c = num + 87;
		write(1, &c, 1);
	}
	else if (mode == 2)
	{
		c = num + '0';
		write(1, &c, 1);
	}
}

void	dec_hex(int dec)
{
	int	remainder;

	remainder = 0;
	if (dec / 16 == 0)
	{
		remainder = dec % 16;
		write(1, "0", 1);
	}
	while (dec / 16 != 0)
	{
		remainder = dec % 16;
		dec = dec / 16;
		if (dec >= 10 && dec <= 15)
			print_dec_hex(dec, 1);
		else
			print_dec_hex(dec, 2);
	}
	if (remainder >= 10 && remainder <= 15)
		print_dec_hex(remainder, 1);
	else
		print_dec_hex(remainder, 2);
}

void	str_dec(char *str)
{
	int	i;

	i = (int) *str;
	dec_hex(i);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 0 && *str <= 31) || *str >= 127)
		{
			write(1, "\\", 1);
			str_dec(str);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
