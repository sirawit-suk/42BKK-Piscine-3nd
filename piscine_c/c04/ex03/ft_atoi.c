/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:27:41 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/22 01:58:19 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	state3(int *var, long int *digit, char *num, char *str)
{
	if (var[1] == 2)
	{
		if (*str >= '0' && *str <= '9')
		{
			num[var[0]] = *str;
			digit[0] = digit[0] * 10;
			var[0]++;
			return (1);
		}
	}
	return (0);
}

int	state2(int *var, long int *digit, char *num, char *str)
{
	if (var[1] == 1)
	{
		if (*str >= '0' && *str <= '9')
		{		
			var[1] = 2;
			return (state3(var, digit, num, str));
		}
		else if (*str == '-' || *str == '+')
		{
			if (*str == '-')
			{
				var[2] = var[2] * -1;
				return (1);
			}
			return (1);
		}
	}
	return (0);
}

int	algorithm(int *var, long int *digit, char *num, char *str)
{
	if (var[1] == 0)
	{
		if (*str >= '0' && *str <= '9')
		{
			var[1] = 2;
			return (state3(var, digit, num, str));
		}
		else if (*str == '-' || *str == '+')
		{
			var[1] = 1;
			return (state2(var, digit, num, str));
		}
		else if ((*str >= 9 && *str <= 13) || *str == ' ')
			return (1);
	}
	else if (var[1] == 1)
		return (state2(var, digit, num, str));
	else if (var[1] == 2)
		return (state3(var, digit, num, str));
	return (0);
}

int	ft_atoi(char *str)
{
	int			var[4];
	int			result;
	char		num[200];
	long		digit[1];

	var[3] = 1;
	var[2] = 1;
	var[1] = 0;
	var[0] = 0;
	digit[0] = 1;
	result = 0;
	while (*str != '\0' && var[3] == 1)
	{
		var[3] = algorithm(var, digit, num, str);
		str++;
	}
	var[0] = 0;
	digit[0] = digit[0] / 10;
	while (digit[0] != 0)
	{
		result += (num[var[0]] - '0') * digit[0];
		digit[0] = digit[0] / 10;
		var[0]++;
	}
	return (result * var[2]);
}
