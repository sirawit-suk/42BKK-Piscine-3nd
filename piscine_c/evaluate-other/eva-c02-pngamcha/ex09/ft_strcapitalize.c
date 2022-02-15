/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngamcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:41:40 by pngamcha          #+#    #+#             */
/*   Updated: 2022/01/19 17:53:54 by pngamcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_check(char a, char b)
{
	if (!((a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9')))
	{
		if (!(a >= 'a' && a <= 'z'))
		{
			return (b - 32);
		}
	}
	return (b);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[i - 1] >= 97 && str[i - 1] <= 122)
	{
		str[i - 1] = str[i - 1] - 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = ft_check(str[i - 1], str[i]);
		}
		i++;
	}
	return (str);
}
