/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharuva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 02:51:01 by ncharuva          #+#    #+#             */
/*   Updated: 2022/01/25 22:02:57 by ncharuva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2);

int main()

{
//	char dest[1000] = "teststringforcompar";
	char a[] = "bbbbbb";
	char b[] = "bbabbb";
//	char src[1000] = "teststringforcompare";
	//printf("%d\n",strcmp(dest,src));
	printf("strcmp(a,b):%d\t", strcmp(a,b));
	printf("ft_strcmp(a,b):%d\n" , ft_strcmp(a,b));
	printf("strcmp(b,a):%d\t", strcmp(b,a));
	printf("ft_strcmp(b,a):%d\n" , ft_strcmp(b,a));
}
