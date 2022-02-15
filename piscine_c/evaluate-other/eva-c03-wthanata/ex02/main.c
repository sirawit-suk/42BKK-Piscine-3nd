/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wthanata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:19:28 by wthanata          #+#    #+#             */
/*   Updated: 2022/01/20 09:52:27 by wthanata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[50] = "Hello";
	char	src[50] = " World";
	char	a[50] = "Hello";
	char	b[50] = " World";
	char	*c;
	char	*d;

	c = ft_strcat(dest, src);
	d = strcat(a, b);
	printf("ft_strcat = %s\n", c);
	printf("strcat result = %s\n", d);
}	
