/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:40:10 by spoolpra          #+#    #+#             */
/*   Updated: 2022/01/18 20:21:28 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_match(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			if (check_match(str, to_find))
				return (str);
		}
		str++;
	}
	return ("\0");
}
