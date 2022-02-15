/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:33:33 by wharinas          #+#    #+#             */
/*   Updated: 2022/01/16 19:43:05 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 24;
	b = 10;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("##exm:\n");
	printf("a / b = div\n");
	printf("cal: %d / %d = %d\n", a, b, (a / b));
	printf("(f): %d / %d = %d\n", a, b, div);
	printf("##exm:\n");
	printf("a mod b = mod\n");
	printf("cal: %d mod %d = %d\n", a, b, (a % b));
	printf("(f): %d mod %d = %d\n", a, b, mod);
}
