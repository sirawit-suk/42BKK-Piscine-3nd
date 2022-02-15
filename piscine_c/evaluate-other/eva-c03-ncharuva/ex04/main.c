/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharuva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 00:16:47 by ncharuva          #+#    #+#             */
/*   Updated: 2022/01/28 02:15:22 by ncharuva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str,char *tofind);

int main()
{
	char full_text[] =  "testStringtofindthetextpleasefindthisneedleinthishaystack or else the program is false";
	char find_text[] = "youcantseeme";
	char *finding= strstr(full_text,find_text);
	printf("full: %s find: %s \n res: %s\n",full_text,find_text,finding);
	char *ft_finding = ft_strstr(full_text,find_text);
	printf("full: %s find: %s \n ft_res: %s\n",full_text,find_text,ft_finding);
}
