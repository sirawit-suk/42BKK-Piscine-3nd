/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 00:17:06 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/19 00:59:24 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	len_src = 0;
	while (src[len_src] != '\0' && len_src < size)
	{
		dest[len_dest + len_src] = src[len_src];
		len_src++;
	}
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	return (len_dest + len_src);
}
