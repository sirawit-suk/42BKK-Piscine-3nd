/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwatchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:51:43 by wwatchar          #+#    #+#             */
/*   Updated: 2022/01/18 14:01:49 by wwatchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print(char a, char b, char c, char d)
{
	if (!(a == c && b == d))
	{
		if ((a < c) || ((a == c) && (b < d)))
		{	
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			write(1, ", ", 2);
		}
		else
		{
			write(1, &c, 1);
			write(1, &d, 1);
			write(1, " ", 1);
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, ", ", 2);
		}
	}	
}

void	back(char a1, char b1)
{
	char	a2;
	char	b2;

	a2 = '0';
	while (a2 <= '9')
	{
		b2 = '0';
		while (b2 <= '9')
		{
			print(a1, b1, a2, b2);
			b2++;
		}
		a2++;
	}	
}

void	ft_print_comb2(void)
{
	char	a1;
	char	b1;

	a1 = '0';
	while (a1 <= '9')
	{
		b1 = '0';
		while (b1 <= '9')
		{
			back(a1, b1);
			b1++;
		}
		a1++;
	}
}
