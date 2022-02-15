/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 08:53:11 by csantivi          #+#    #+#             */
/*   Updated: 2022/01/24 11:05:54 by csantivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*basket;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == to_find[i])
		{
			if (i == 0)
				basket = str;
			if (to_find[i + 1] == '\0')
				return (basket);
			i++;
		}
		else
			i = 0;
		str++;
	}
	return (NULL);
}
