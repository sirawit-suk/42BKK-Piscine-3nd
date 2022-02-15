/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 06:03:04 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/13 17:54:00 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	condition(int digit1, int digit2)
{
	char	char1;
	char	char2;
	char	char3;
	char	char4;

	if (digit1 < digit2)
	{
		char1 = digit1 / 10 + '0';
		char2 = digit1 % 10 + '0';
		char3 = digit2 / 10 + '0';
		char4 = digit2 % 10 + '0';
		write(1, &char1, 1);
		write(1, &char2, 1);
		write(1, " ", 1);
		write(1, &char3, 1);
		write(1, &char4, 1);
		if (!(digit1 == 98 && digit2 == 99))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	int	digit1;
	int	digit2;

	digit1 = 0;
	digit2 = 0;
	while (digit1 <= 99)
	{
		while (digit2 <= 99)
		{
			condition(digit1, digit2);
			digit2++;
		}
		digit2 = 0;
		digit1++;
	}
}
