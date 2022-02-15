/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpengnit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:07:14 by kpengnit          #+#    #+#             */
/*   Updated: 2022/01/20 23:17:33 by kpengnit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 234;
	b = 643;
	div = &a;
	mod = &b;
	printf("before: %d / %d\n", *div, *mod);
	ft_div_mod(a, b, div, mod);
	printf("after: %d, %d\n", *div, *mod);
}
