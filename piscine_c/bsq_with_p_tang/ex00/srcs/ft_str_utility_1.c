/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strutil1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:00:23 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 18:16:51 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;

	size = ft_strlen(src) + 1;
	dest = (char *)malloc(sizeof(char) * size);
	dest = ft_strcpy(dest, src);
	return (dest);
}

char	*ft_strextend(char *str, char c)
{
	int		i;
	int		size;
	char	*dest;

	size = ft_strlen(str) + 2;
	dest = (char *)malloc(sizeof(char) * size);
	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	free(str);
	dest[i] = c;
	dest[i + 1] = '\0';
	return (dest);
}
