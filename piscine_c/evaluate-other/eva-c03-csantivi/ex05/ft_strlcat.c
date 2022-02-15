/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:21:54 by csantivi          #+#    #+#             */
/*   Updated: 2022/01/24 18:39:44 by csantivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	d = 0;
	s = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0')
		s++;
	if (d > size)
		return (size + s);
	while (src[i] != '\0' && i < size - d - 1)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	while (src[i] != '\0')
		i++;
	if (size < d)
		return (size + i);
	return (d + i);
}
