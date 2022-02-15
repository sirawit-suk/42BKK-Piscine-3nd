/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 04:52:17 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/13 15:55:52 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_three_digit(char digit1, char digit2, char digit3)
{
	if (digit1 < digit2 && digit2 < digit3)
	{
		write(1, &digit1, 1);
		write(1, &digit2, 1);
		write(1, &digit3, 1);
		if (!(digit1 == '7' && digit2 == '8' && digit3 == '9'))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	digit1;
	char	digit2;
	char	digit3;

	digit1 = '0';
	digit2 = '0';
	digit3 = '0';
	while (digit1 <= '7')
	{
		while (digit2 <= '8')
		{
			while (digit3 <= '9')
			{
				print_three_digit(digit1, digit2, digit3);
				digit3++;
			}
			digit2++;
			digit3 = digit2;
		}
		digit1++;
		digit2 = digit1;
	}
}				
