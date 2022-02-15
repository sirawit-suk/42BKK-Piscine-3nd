/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:55:53 by spoolpra          #+#    #+#             */
/*   Updated: 2022/01/19 00:55:13 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	n;

	n = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[n] = *src;
		src++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
