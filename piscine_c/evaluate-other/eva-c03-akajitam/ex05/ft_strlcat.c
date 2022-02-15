/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajitam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:13:23 by akajitam          #+#    #+#             */
/*   Updated: 2022/01/26 22:39:44 by akajitam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		i++;
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	n = ft_strlen(dest);
	i = 0;
	if (size <= n)
	{
		return (size + ft_strlen(src));
	}
	while (n + i < size - 1 && src[i] != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (n + ft_strlen(src));
}
