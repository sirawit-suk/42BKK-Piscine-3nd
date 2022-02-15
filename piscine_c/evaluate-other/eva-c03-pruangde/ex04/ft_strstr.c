/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruangde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:17:09 by pruangde          #+#    #+#             */
/*   Updated: 2022/01/28 12:13:27 by pruangde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	tf_len;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	else
		tf_len = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j + 1] != '\0')
			{
				j++;
			}
			if (j == (tf_len - 1))
				return (&str[i]);
		}
		i++;
	}
	return ("\0");
}

int	ft_strlen(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	return (i);
}
