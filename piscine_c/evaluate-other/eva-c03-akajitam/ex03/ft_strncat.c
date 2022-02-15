/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajitam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 02:23:04 by akajitam          #+#    #+#             */
/*   Updated: 2022/01/26 16:45:39 by akajitam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*buff;
	unsigned int	i;

	buff = dest;
	i = 0;
	while (*buff != '\0')
	{
		buff++;
	}
	while (i < nb)
	{
		*buff = *src;
		buff++;
		src++;
		i++;
	}
	return (dest);
}
