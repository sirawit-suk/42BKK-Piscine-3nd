/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:26:39 by wharinas          #+#    #+#             */
/*   Updated: 2022/01/26 20:43:48 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
int		valibase(char *base);
void	ft_putchar(char c);

void	ft_putnbr_base(int nb, char *base)
{
	int	base_len;
	int	b_i;

	if (valibase(base))
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb > 0)
		{
			base_len = ft_strlen(base);
			b_i = nb % base_len;
			nb = nb / base_len;
			ft_putnbr_base(nb, base);
			ft_putchar(base[b_i]);
		}
	}
}

int	valibase(char *base)
{
	int	list_i;
	int	check_i;

	if (ft_strlen(base) < 2)
		return (0);
	else
	{
		list_i = 0;
		while (base[list_i])
		{
			if (base[list_i] == '-' || base[list_i] == '+')
				return (0);
			check_i = 0;
			while (base[check_i])
			{
				if (list_i != check_i && base[list_i] == base[check_i])
					return (0);
				check_i++;
			}
			list_i++;
		}
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
