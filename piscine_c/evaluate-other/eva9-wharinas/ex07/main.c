/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:13:31 by wharinas          #+#    #+#             */
/*   Updated: 2022/01/18 22:24:35 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
void	print_test(int n[10]);

int	main(void)
{
	int	n[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	printf("Start:\n");
	print_test(n);
	ft_rev_int_tab(n, 10);
	printf("After:\n");
	print_test(n);
}

void	print_test(int n[10])
{
	int	i;
       
	i = 0;
	while (i < 11)
	{
		if (!!i)
			printf(", ");
		printf("%d", n[i]);
		i++;
	}
	printf("\n");
}
