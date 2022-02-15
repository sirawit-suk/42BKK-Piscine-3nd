/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wthanata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:19:28 by wthanata          #+#    #+#             */
/*   Updated: 2022/01/20 17:14:57 by wthanata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[50] = "Hello My Name";
	char	src[50] = " is ccc";
	char	a[50] = "Hello My Name";
	char	b[50] = " is ccc";
	unsigned int	c;
	unsigned int	d;

	printf("dest[] = %s\n", dest);
	printf("src[] = %s\n", src);
	printf("----------------------------------------\n");
	c = ft_strlcat(dest, src, 16);
	d = strlcat(a, b, 16);
	printf("ft_strlcat = %s\n", dest);
	printf("strlcat result = %s\n", a);
	printf("return ft_strlcat = %d\n", c);
	printf("return strlcat result = %d\n", d);
}	
