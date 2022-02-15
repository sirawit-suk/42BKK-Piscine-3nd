/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wthanata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:19:28 by wthanata          #+#    #+#             */
/*   Updated: 2022/01/21 09:44:51 by wthanata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1;
	char	*s2;
	int		c;
	int		d;

	s1 = "HelloHowareyou";
	s2 = "HelloWorld";
	c = ft_strncmp(s1, s2, 2);
	d = strncmp(s1, s2, 2);
	printf("ft_strncmp = %d\n", c);
	printf("strncmp result = %d\n", d);
}	
