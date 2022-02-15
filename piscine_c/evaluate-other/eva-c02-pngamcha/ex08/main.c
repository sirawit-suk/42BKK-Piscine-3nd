/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngamcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:11:58 by pngamcha          #+#    #+#             */
/*   Updated: 2022/01/18 20:33:37 by pngamcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	char1[] = "ThisStringIsContain21321nlyAlphabet";
	char	char2[] = "abcdefgHIJKLMNOPQ";
	char	char3[] = "";

	printf("1. %s\n", char1);
	printf(" %s\n", ft_strlowcase(char1));
	printf("2. %s\n", char2);
	printf(" %s\n", ft_strlowcase(char2));
	printf("Empty String : %s\n", ft_strlowcase(char3));
}
