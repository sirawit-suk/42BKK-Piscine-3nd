/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:13:47 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/21 16:52:16 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_check(char *base, char *str, int mode);

int	state2(int *var, char *num, char *str, char *base)
{
	if (var[1] == 1)
	{
		if (base_check(base, str, 1) == -2)
		{		
			var[1] = 2;
			return (state2(var, num, str, base));
		}
		else if (*str == '-' || *str == '+')
		{
			if (*str == '-')
				var[2] = var[2] * -1;
			return (1);
		}
	}
	else if (var[1] == 2)
	{
		if (base_check(base, str, 1) == -2)
		{
			num[var[0]++] = *str;
			return (1);
		}
	}
	return (0);
}

int	algorithm(int *var, char *num, char *str, char *base)
{
	if (var[1] == 0)
	{
		if (base_check(base, str, 1) == -2)
		{
			var[1] = 2;
			return (state2(var, num, str, base));
		}
		else if (*str == '-' || *str == '+')
		{
			var[1] = 1;
			return (state2(var, num, str, base));
		}
		else if ((*str >= 9 && *str <= 13) || *str == ' ')
		{
			return (1);
		}
	}
	else if (var[1] == 1 || var[1] == 2)
		return (state2(var, num, str, base));
	return (0);
}

int	base_check(char *base, char *str, int mode)
{
	int	i;
	int	j;
	int	status;

	i = 0;
	while (base[i] != '\0')
	{
		if (*str == base[i] && mode == 1)
			return (-2);
		if (base[i] == '+' || base[i] == '-')
			return (-1);
		j = 0;
		status = 0;
		while (base[j] != '\0')
		{
			if (base[i] == base[j++])
				status++;
		}
		if (status >= 2)
			return (-1);
		i++;
	}
	if (i == 0 || i == 1)
		return (-1);
	return (i);
}

int	recursive_base(char *str, char *base, long base_num, int len)
{
	int	i;
	int	value;
	int	power;

	power = 1;
	value = 0;
	if (*str == '\0')
		return (0);
	i = 0;
	while (i < base_num)
	{
		if (*str == base[i])
		{
			value = i;
			break ;
		}
		i++;
	}
	str++;
	i = 0;
	while (i++ < len - 1)
		power = power * base_num;
	return (recursive_base(str, base, base_num, len - 1) + (value * power));
}

int	ft_atoi_base(char *str, char *base)
{
	int		base_num;
	int		var[4];
	int		result;
	char	num[200];

	var[3] = 1;
	var[2] = 1;
	var[1] = 0;
	var[0] = 0;
	result = 0;
	base_num = base_check(base, "\0", 0);
	if (base_num == -1)
		return (0);
	while (*str != '\0' && var[3] == 1)
	{
		var[3] = algorithm(var, num, str, base);
		str++;
	}
	num[var[0]] = '\0';
	result = recursive_base(num, base, base_num, var[0]);
	result *= var[2];
	return (result);
}
