/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajitam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:22:10 by akajitam          #+#    #+#             */
/*   Updated: 2022/01/26 22:40:02 by akajitam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char a[50] = "Hasd";
	char b[50] = "WORLD";
	unsigned int 	n;
	n = ft_strlcat(a, b, 6);
	printf("mine = %s\n", a);
	printf("mine = %d\n", n);

	char dest[50] = "Hasd";
	char src[50] = "WORLD";
	unsigned int     n2;
	n2 = strlcat(dest, src, 6);
	printf("lib = %s\n", dest);
	printf("lib = %d\n", n2);
}
