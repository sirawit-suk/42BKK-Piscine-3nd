/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:48:32 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 18:14:44 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "str_utility.h"
#include "file_utility.h"
#include <stdlib.h>

char	*ft_read_line(int fd)
{
	int		byte_read;
	char	*line;
	char	buffer[1];

	line = (char *)malloc(sizeof(char));
	if (!line)
		return (0);
	line[0] = '\0';
	byte_read = read(fd, buffer, 1);
	while (byte_read > 0)
	{
		line = ft_strextend(line, buffer[0]);
		byte_read = read(fd, buffer, 1);
		if (buffer[0] == '\n')
			break ;
	}
	return (line);
}

int	valid_char(int i, char *alpha, char c)
{
	int	j;

	if (c < 32 || c > 126)
		return (0);
	j = 0;
	while (j < i)
	{
		if (alpha[j] == c)
			return (0);
		j++;
	}
	return (1);
}

int	extract_row(char *line, int size)
{
	int	i;
	int	nbr;
	int	row;

	i = 0;
	row = 0;
	while (i < size)
	{
		if (!ft_is_nbr(line[i]))
			return (-1);
		nbr = line[i] - '0';
		row = row * 10;
		row = row + nbr;
		i++;
	}
	return (row);
}

int	valid_inf(int index, char *line, t_info *info)
{	
	int	i;

	info->alpha = (char *)malloc(sizeof(char) * 4);
	if (info->alpha == NULL)
	{
		free(line);
		return (0);
	}
	i = 0;
	while (line[index + i] != '\0')
	{
		if (i < 3 && valid_char(i, info->alpha, line[index + i]))
			(info->alpha)[i] = line[index + i];
		else
		{
			free(line);
			return (0);
		}
		i++;
	}
	(info->alpha)[i] = '\0';
	free(line);
	return (1);
}

int	valid_first_line(t_info *info, int *n_row)
{
	int		size;
	char	*line;

	line = ft_read_line(info->fd);
	size = ft_strlen(line);
	if (size < 4)
	{
		free(line);
		return (0);
	}
	*n_row = extract_row(line, (size - 3));
	if (*n_row <= 0)
	{
		free(line);
		return (0);
	}
	if (!valid_inf(size - 3, line, info))
	{
		return (0);
	}
	return (1);
}
