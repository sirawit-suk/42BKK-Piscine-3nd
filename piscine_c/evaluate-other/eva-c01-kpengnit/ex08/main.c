/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpengnit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:20:11 by kpengnit          #+#    #+#             */
/*   Updated: 2022/01/21 20:55:49 by kpengnit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	main(void)
{
	int	tab[10] = {51, 5, 8, 0, -1, 1, -50, -8, 546, 1};
	int	size;
	int	i;

	size = 10;
	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		ft_putnbr(tab[i]);
		if (i != size -1)
			write(1, " ", 1);
		i++;
	}
}
