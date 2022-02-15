/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharuva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 22:59:59 by ncharuva          #+#    #+#             */
/*   Updated: 2022/01/26 02:15:37 by ncharuva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest,char *src);

int main()

{
	char src[100] = "forconcatenate";
	char dest[100] = "testString";
	char src1[100] = "forconcatenate";
	char dest1[100] = "testString";
	printf("strcat:%s\n",strcat(dest,src));
	printf("ft_strcat:%s\n",ft_strcat(dest1,src1));

}
