/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:11:32 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/17 21:22:46 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_char(char *str, int size)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		temp = *(str + i);
		*(str + i) = *(str + j);
		*(str + j) = temp;
		i++;
		j--;
	}
}

void	print_string(char *str, int end)
{
	int	i;
	int	is_spacebar;

	i = 0;
	is_spacebar = 0;
	while (str[i] != '\0')
	{
		if (is_spacebar == 0 || str[i] != ' ')
			write(1, &str[i], 1);
		if (str[i] == ' ')
			is_spacebar = 1;
		else
			is_spacebar = 0;
		i++;
	}
	if (end == 1)
		write(1, "\n", 1);
}

void	dec_hex(long int dec, int zero)
{
	long int	remainder;
	int			i;
	char		buff[16];

	i = 0;
	while (dec > 0)
	{
		remainder = dec % 16;
		dec = dec / 16;
		if (remainder >= 10 && remainder <= 15)
			buff[i] = remainder + 87;
		else
			buff[i] = remainder + '0';
		i++;
	}
	while (i < zero)
	{
		buff[i] = '0';
		i++;
	}
	ft_rev_char(buff, i);
	buff[i] = '\0';
	print_string(buff, 0);
}

void	algorithm(char *str, int i, char *buff)
{
	dec_hex(str[i], 2);
	if (str[i] >= 0 && str[i] <= 31)
		buff[i % 16] = '.';
	else
		buff[i % 16] = str[i];
	if (i % 2 == 1)
		write(1, " ", 1);
}

void	*ft_print_memory(void *address, unsigned int size)
{
	long int	i;
	long int	j;
	char		buff[17];
	char		*str;

	str = address;
	i = 0;
	while (i < size)
	{
		dec_hex((long int)address + i, 16);
		write(1, ": ", 2);
		j = 0;
		while (j < 16 && i < size)
		{
			algorithm(str, i, buff);
			i++;
			j++;
		}
		buff[j] = '\0';
		if (i == size && j < 16)
			write(1, "    ", 4);
		print_string(buff, i != size);
	}
	return (address);
}
