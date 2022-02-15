/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajitam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 22:41:17 by akajitam          #+#    #+#             */
/*   Updated: 2022/01/26 00:08:35 by akajitam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	a[] = "abcdef";
	char	b[] = "";
	int	n;
	int	m;
	n = strncmp(a, b, 20);
	m = ft_strncmp(a, b, 20);
	printf("lib = %d\n", n);
	printf("mine  = %d\n", m);
}
