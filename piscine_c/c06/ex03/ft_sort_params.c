/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:33:46 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/24 22:33:54 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		s1++;
		s2++;
	}
	return (0);
}

void	ft_sort_tab(char *tab[], int size)
{
	int		i;
	int		j;
	int		swap;
	char	*temp;

	j = 1;
	swap = 0;
	while (j < size - 1)
	{
		i = 2;
		while (i < size - j + 1)
		{
			if (ft_strcmp(tab[i - 1], tab[i]) == 1)
			{
				temp = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = temp;
				swap = 1;
			}
			i++;
		}
		j++;
		if (swap == 0)
			break ;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_tab(argv, argc);
	i = 1;
	while (argc > 1)
	{
		while (*argv[i] != '\0')
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		argc--;
		i++;
		write(1, "\n", 1);
	}
}
