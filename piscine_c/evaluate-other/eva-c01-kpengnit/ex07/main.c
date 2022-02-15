/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpengnit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 00:42:43 by kpengnit          #+#    #+#             */
/*   Updated: 2022/01/21 13:17:17 by kpengnit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_print_array(int *num, int size)
{
	int	i = 0;
	while (i < size)
	{
		printf("%d", num[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	size;
	int	tab[10] = {4, 1, 4, 5, 4, 2, 5, 4, 0, 8};

	size = 10;
	printf("before: ");
	ft_print_array(tab, size);
	ft_rev_int_tab(tab, size);
	printf("after: ");
	ft_print_array(tab, size);
}
