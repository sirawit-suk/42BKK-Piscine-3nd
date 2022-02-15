/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:11:42 by wharinas          #+#    #+#             */
/*   Updated: 2022/01/26 20:45:14 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	status;
	int	rs;

	i = 0;
	sign = 1;
	status = -1;
	while (str[++i] && status < 3)
	{
		if (status < 2 && (str[i] == '-' || str[i] == '+'))
		{
			if (str[i] == '-')
				sign *= -1;
			status = 1;
		}
		else if (status < 3 && (str[i] >= '0' && str[i] <= '9'))
		{
			rs = (rs * 10) + (str[i] - '0');
			status = 2;
		}
		else if (status > 0)
			status = 3;
	}
	return (rs * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
