/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wthanata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:50:06 by wthanata          #+#    #+#             */
/*   Updated: 2022/01/20 13:35:22 by wthanata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i = 0;
		j = 1;
		if (str[i] == to_find[i])
		{
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					j = 0;
				i++;
			}
			if (j == 1)
				return (str);
		}
		str++;
	}
	return (0);
}
