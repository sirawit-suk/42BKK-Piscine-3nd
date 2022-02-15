/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:07:04 by wharinas          #+#    #+#             */
/*   Updated: 2022/01/17 20:59:37 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	print_test(int *tab, int size)
{
	int	i;
       
	i = 0;
	while (i<size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	n[] = {3,5,1,2};

	print_test(n, 4);
	ft_sort_int_tab(n, 4);
	print_test(n, 4);
}
