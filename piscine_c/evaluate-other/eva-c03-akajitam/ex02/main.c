/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajitam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 00:24:34 by akajitam          #+#    #+#             */
/*   Updated: 2022/01/26 12:44:19 by akajitam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char str1[100] =  "Hellowever";
	char str2[100] = "Word";
	char *str = str1;
	char *str_2 = str2;
	ft_strcat(str, str_2);
	printf("%s\n", str1);

}
	
