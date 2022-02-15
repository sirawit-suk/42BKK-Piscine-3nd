/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utility.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:47:51 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 21:04:29 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_UTILITY_H
# define STR_UTILITY_H
# define INVALID "map error\n"

int		ft_strlen(char *str);
int		ft_is_space(char c);
int		ft_is_nbr(char c);
int		ft_is_printable(char c);
int		ft_is_alpha(char c);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_puterr(char *str);
void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
char	*ft_strextend(char *str, char c);

#endif
