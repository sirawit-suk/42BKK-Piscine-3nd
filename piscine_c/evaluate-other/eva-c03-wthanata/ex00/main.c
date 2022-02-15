/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wthanata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:19:28 by wthanata          #+#    #+#             */
/*   Updated: 2022/01/21 09:11:30 by wthanata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1;
	char	*s2;
	int		c;
	int		d;

	s1 = "Hey";
	s2 = "Hello";
	c = ft_strcmp(s1, s2);
	d = strcmp(s1, s2);
	printf("ft_strcmp = %d\n", c);
	printf("strcmp result = %d\n", d);
}	
