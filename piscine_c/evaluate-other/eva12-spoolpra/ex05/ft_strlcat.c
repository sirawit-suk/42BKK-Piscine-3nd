/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:07:31 by spoolpra          #+#    #+#             */
/*   Updated: 2022/01/19 17:46:42 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*find_ending(unsigned int size, char *dest)
{
	while (size > 0 && *dest != '\0')
	{
		dest++;
		size--;
	}
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dest_end;
	char			*src_cursor;
	unsigned int	n;
	unsigned int	dest_len;

	src_cursor = src;
	dest_end = find_ending(size, dest);
	dest_len = dest_end - dest;
	n = size - dest_len;
	if (n == 0)
		return (dest_len + ft_strlen(src));
	while (*src_cursor != '\0')
	{
		if (n != 1)
		{
			*dest_end = *src_cursor;
			dest_end++;
			n--;
		}
		src_cursor++;
	}
	*dest_end = '\0';
	return (dest_len + (src_cursor - src));
}
