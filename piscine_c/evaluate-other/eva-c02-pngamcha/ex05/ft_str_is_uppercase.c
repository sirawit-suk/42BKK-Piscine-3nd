/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngamcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:35:54 by pngamcha          #+#    #+#             */
/*   Updated: 2022/01/18 19:36:26 by pngamcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	check;
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		check = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			check = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (check);
}
