/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajitam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 22:18:29 by akajitam          #+#    #+#             */
/*   Updated: 2022/01/26 00:08:17 by akajitam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		result++;
		i++;
	}
	return (result);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	result = 0;
	if (ft_strlen(s1) > 1 && ft_strlen(s2) > 1)
	{
		while (i < n)
		{
			if (s1[i] < s2[i] || s1[i] > s2[i])
				result += s1[i] - s2[i];
			i++;
		}
	}
	else
	{
		result += s1[i] - s2[i];
	}
	return (result);
}
