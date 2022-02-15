/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wthanata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:19:28 by wthanata          #+#    #+#             */
/*   Updated: 2022/01/20 13:43:38 by wthanata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "Hello My Name is ccc";
	char	to_find[] = "My";
	char	a[] = "Hello My Name is ccc";
	char	b[] = "My";
	char	*c;
	char	*d;

	printf("str[] = %s\n", str);
	printf("to_find[] = %s\n", to_find);
	printf("----------------------------------------\n");
	c = ft_strstr(str, to_find);
	d = strstr(a, b);
	printf("ft_strstr = %s\n", c);
	printf("strstr result = %s\n", d);
}	
