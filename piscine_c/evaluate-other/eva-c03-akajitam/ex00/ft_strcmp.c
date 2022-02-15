/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajitam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 22:34:40 by akajitam          #+#    #+#             */
/*   Updated: 2022/01/25 22:55:06 by akajitam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result++;
		i++;
	}
	return (result);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	if (ft_strlen(s1) > 1 && ft_strlen(s2) > 1)
	{
		while (i < ft_strlen(s1) - 1)
		{	
			if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
				result += s1[i] - s2[i];
			i++;
		}
	}
	else
	{
		result += s1[i] - s2[i];
	}
	return (result);
}
