/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngamcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:07:44 by pngamcha          #+#    #+#             */
/*   Updated: 2022/01/19 19:04:17 by pngamcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;

	i = 0;
	dest_length = ft_len(dest);
	while (i < size - 1)
	{
		if (src[i])
		{
			dest[i] = src[i];
		}
		i++;
	}
	while (i <= dest_length)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_len(src));
}
