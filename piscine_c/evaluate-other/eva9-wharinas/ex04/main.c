/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:43:25 by wharinas          #+#    #+#             */
/*   Updated: 2022/01/16 19:47:39 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 13;
	b = 10;
	printf("a: %d, b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div: %d, mod: %d", a, b);
}
