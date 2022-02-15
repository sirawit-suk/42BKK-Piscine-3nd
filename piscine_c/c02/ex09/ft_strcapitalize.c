/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 05:20:19 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/18 21:34:29 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	condition(char *str, int i, int *begin)
{
	if (!((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9')))
		*begin = 1;
	else
	{
		if (*begin == 1)
		{
			*begin = 0;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}	
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	*begin;
	int	begin_num;

	i = 0;
	begin = &begin_num;
	*begin = 1;
	while (str[i] != '\0')
	{
		condition(str, i, begin);
		i++;
	}
	return (str);
}
