/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wthanata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:20:04 by wthanata          #+#    #+#             */
/*   Updated: 2022/01/20 16:58:07 by wthanata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	countsrc(char *src, unsigned int m)
{
	while (src[m] != '\0')
		m++;
	return (m);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	n;
	unsigned int	m;

	i = 0;
	j = 0;
	n = 0;
	m = 0;
	while (dest[i] != '\0')
	{
		i++;
		n++;
	}
	m = countsrc(src, m);
	if (n >= size)
		return (size + m);
	while (((n + j) <= (size - 2)) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}	
	dest[i] = '\0';
	return (n + m);
}
