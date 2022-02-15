/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_utility_3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 00:20:17 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 21:07:46 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_utility.h"
#include <unistd.h>

void	ft_putnbr(int nbr)
{
	int	tmp;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	tmp = nbr % 10;
	ft_putchar(tmp + '0');
}

void	ft_puterr(char *str)
{
	while (*str != '\0')
		write(2, str++, 1);
}
