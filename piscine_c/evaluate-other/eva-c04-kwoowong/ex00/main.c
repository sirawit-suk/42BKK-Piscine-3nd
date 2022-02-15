/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:40:04 by kwoowong          #+#    #+#             */
/*   Updated: 2022/01/17 09:44:54 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str = "Hello, world";
      	int	len;

	len = ft_strlen(str);
	printf("The length of '%s' is %d", str, len);	
}
