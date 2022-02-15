/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:52:36 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/02 14:12:06 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "str_utility.h"
#include "file_utility.h"
#include <stdlib.h>

int		valid_file(char *file_path);
void	error_info(t_info *info);

void	valid_stdin(void)
{
	t_info	*info;

	info = (t_info *)malloc(sizeof(t_info) * 1);
	info->fd = 0;
	info->alpha = NULL;
	info->col = 0;
	if (!process_file(info))
	{
		error_info(info);
		return ;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		valid_stdin();
		return (0);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			valid_file(argv[i]);
			if (i != (argc - 1))
				ft_putchar('\n');
			i++;
		}
	}
	return (1);
}
