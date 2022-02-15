/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpengnit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:08:06 by kpengnit          #+#    #+#             */
/*   Updated: 2022/01/20 22:23:12 by kpengnit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	s;
	int	t;
	int	*a;
	int	*b;

	s = 100032;
	t = 1090;
	a = &s;
	b = &t;
	printf("before: %d, %d\n", s, t);
	ft_swap(a, b);
	printf("after: %d, %d\n", s, t);
}
