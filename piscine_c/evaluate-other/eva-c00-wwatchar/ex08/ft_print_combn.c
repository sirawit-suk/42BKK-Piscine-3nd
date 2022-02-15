/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwatchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:48:22 by wwatchar          #+#    #+#             */
/*   Updated: 2022/01/23 15:49:33 by wwatchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a)
{
	write(1, &a, 1);
}

void	ft_putvet(int vet[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_print(vet[i] + '0');
		i++;
	}
}

int	ft_index(int combo[], int n)
{
	int	i;
	int	max;

	i = 0;
	max = 10 - n;
	while (i < n)
	{
		if (combo[i] == max)
			return (i - 1);
		if (i == (n - 1) && combo[i] < max)
			return (i);
		i++;
		max++;
	}
	return (-1);
}

void	ft_increment(int vet[], int n, int index)
{
	int	i;

	i = index + 1;
	vet[index]++;
	while (i <= n)
	{
		vet[i] = vet[i -1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	combo[10];
	int	i;
	int	index;
	
	if (n >= 10 || n <= 0)
		return ;
	else
	{
		i = 0;
		while (i < n)
		{
			combo[i] = i;
			i++;
		}
		while (ft_index(combo, n) != -1)
		{
			index = ft_index(combo, n);
			ft_putvet(combo, n);
			ft_increment(combo, n, index);
			write(1, ", ", 2);
		}
		ft_putvet(combo, n);
	}
}
