/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:55:09 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/27 17:49:39 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	calculate(int size, char **strs, char *sep)
{
	int	i;
	int	all_len;

	all_len = 0;
	i = 0;
	while (i < size)
	{
		all_len += ft_strlen(strs[i]);
		i++;
	}
	all_len += ft_strlen(sep) * (size - 1);
	all_len++;
	return (all_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		all_len;
	int		i;
	int		j;

	if (size == 0)
		return (malloc(sizeof(char)));
	all_len = calculate(size, strs, sep);
	result = malloc(sizeof(char) * all_len);
	i = 0;
	all_len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			result[all_len++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			result[all_len++] = sep[j++];
		i++;
	}
	result[all_len] = '\0';
	return (result);
}
