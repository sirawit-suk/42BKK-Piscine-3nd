/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:33:14 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/30 15:07:01 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);

#include <stdio.h>
int main()
{
	ft_putchar('T');
	ft_putstr("est\n");
	int a = 1;
	int b = 2;
	ft_swap(&a, &b);
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	printf("\n%d", ft_strcmp("test1", "test4"));
}
