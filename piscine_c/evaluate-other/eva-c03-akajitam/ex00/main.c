/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajitam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:55:29 by akajitam          #+#    #+#             */
/*   Updated: 2022/01/25 21:40:13 by akajitam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *str1, char *str2);

int	main(void)
{
	char a[] = "abc";
	char b[] = "";
	int n;
	int m;
	n = strcmp(a, b);
	m = ft_strcmp(a, b);
	printf("lib = %d\n", n);
	printf("mine = %d\n", m);
}
