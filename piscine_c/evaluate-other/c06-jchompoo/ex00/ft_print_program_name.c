/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchompoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:44:45 by jchompoo          #+#    #+#             */
/*   Updated: 2022/01/28 19:19:38 by jchompoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		while (*av[0] != '\0')
		{
			write (1, av[0], 1);
			av[0]++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
