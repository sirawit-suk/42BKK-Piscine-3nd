/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:03:24 by wharinas          #+#    #+#             */
/*   Updated: 2022/01/26 18:49:42 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	nbr_len(int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb = (nb - (nb % 10)) / 10;
		i++;
	}
	return (i);
}

int	power(int a, int b)
{
	int	rs;

	rs = 1;
	while (--b)
		rs = rs * a;
	return (rs);
}

void	ft_putnbr(int nb)
{
	int	nb_len;
	int	f_digit;
	int	m_base;	

	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else if (nb == 0)
		ft_putchar('0');
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		nb_len = nbr_len(nb);
		while (nb_len)
		{
			m_base = power(10, nb_len);
			f_digit = nb / m_base;
			nb -= f_digit * m_base;
			ft_putchar('0' + f_digit);
			nb_len--;
		}
	}
}
