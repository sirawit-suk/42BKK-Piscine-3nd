/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpengnit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:21:05 by kpengnit          #+#    #+#             */
/*   Updated: 2022/01/20 23:34:58 by kpengnit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	c;
	int	d;
	int	*i = &c;
	int	*j = &d;

	c = 402;
	d = 123;
	printf("before: %d / %d\n", *i, *j);
	ft_ultimate_div_mod(i, j);
	printf("after: %d , %d\n", *i, *j);
}	
