/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:01:26 by wharinas          #+#    #+#             */
/*   Updated: 2022/01/26 20:41:39 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *base);
int	is_base(char c, char *base);
int	power(int a, int b);
int	base_value(char c, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	rs;
	int	sign;
	int	status;
	int	base_len;

	i = 0;
	rs = 0;
	sign = 1;
	status = 0;
	base_len = ft_strlen(base);
	while (str[i])
	{
		if (str[i] == '-')
			sign *= -1;
		else if (is_base(str[i], base))
		{
			rs = (rs * base_len) + base_value(str[i], base);
			status = 1;
		}
		else if (status)
			break ;
		i++;
	}
	return (rs * sign);
}

int	base_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	power(int a, int b)
{
	int	rs;

	rs = 1;
	while (b--)
		rs *= a;
	return (rs);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	is_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
		if (c == base[i++])
			return (1);
	return (0);
}
