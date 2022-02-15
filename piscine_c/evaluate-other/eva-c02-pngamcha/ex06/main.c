/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngamcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:11:58 by pngamcha          #+#    #+#             */
/*   Updated: 2022/01/19 22:38:25 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	char1[] = "ThisStringIsContain213  \n !!## nlyAlphabet";
	char	char2[] = "ABCDEF";
	char	char3[] = "";

	printf("%s : %d\n", char1, ft_str_is_printable(char1));
	printf("%s : %d\n", char2, ft_str_is_printable(char2));
	printf("Empty String : %d\n", ft_str_is_printable(char3));
}
