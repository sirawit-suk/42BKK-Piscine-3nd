/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharuva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 22:01:54 by ncharuva          #+#    #+#             */
/*   Updated: 2022/01/25 22:02:23 by ncharuva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharuva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 02:51:01 by ncharuva          #+#    #+#             */
/*   Updated: 2022/01/25 22:00:36 by ncharuva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()

{
//	char dest[1000] = "teststringforcompar";
	char a[] = "bbababbb";
	char b[] = "bbbbbbbb";
//	char src[1000] = "teststringforcompare";
	int n = 3;
	//printf("%d\n",strcmp(dest,src));
	printf("strncmp(a,b):%d\t", strncmp(a,b,n));
	printf("ft_strncmp(a,b):%d\n" , ft_strncmp(a,b,n));
	printf("strncmp(b,a):%d\t", strncmp(b,a,n));
	printf("ft_strncmp(b,a):%d\n" , ft_strncmp(b,a,n));
}
