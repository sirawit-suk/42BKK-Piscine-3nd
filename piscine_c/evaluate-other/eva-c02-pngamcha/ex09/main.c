/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngamcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:42:23 by pngamcha          #+#    #+#             */
/*   Updated: 2022/01/19 22:41:11 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str[] = "42Aaas 42aasd !@#aasdaASDASD salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char st1[] = "salut, commAnt tu vas ? 42mOts qUarante-deux; cinquante+et+un";


	printf("Before : %s\n", str);
	printf("Result : %s\n", ft_strcapitalize(str));
	printf("Result random capital : %s\n", ft_strcapitalize(st1));
}
