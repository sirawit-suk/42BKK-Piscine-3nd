/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:04:03 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/21 16:19:23 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_check(char *base)
{
	int	i;
	int	j;
	int	status;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (-1);
		j = 0;
		status = 0;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				status++;
			j++;
		}
		if (status >= 2)
			return (-1);
		i++;
	}
	if (i == 0 || i == 1)
		return (-1);
	return (i);
}

void	recursive_base(long num, char *base, long base_num)
{
	int	remainder;

	if (num > 0)
	{
		recursive_base(num / base_num, base, base_num);
		remainder = num % base_num;
		write(1, &base[remainder], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_num;
	long	num;

	num = nbr;
	base_num = base_check(base);
	if (base_num == -1)
		return ;
	if (num == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	recursive_base(num, base, base_num);
}
