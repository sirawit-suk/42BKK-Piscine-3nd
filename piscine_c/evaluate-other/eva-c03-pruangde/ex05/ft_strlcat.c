/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruangde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:14:11 by pruangde          #+#    #+#             */
/*   Updated: 2022/01/28 22:54:26 by pruangde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	cn;
	unsigned int	i;
	unsigned int	len_dst;
	unsigned int	len_src;

	len_dst = ft_strlen(dest);
	len_src = ft_strlen(src);
	cn = len_dst;
	i = 0;
	if (size < len_dst)
		return (len_dst + len_src);
	else
	{
		while (cn < (size - 1) && src[i] != '\0')
		{
			dest[cn] = src[i];
			cn++;
			i++;
		}
		dest[cn] = '\0';
	}
	return (len_dst + len_src);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
