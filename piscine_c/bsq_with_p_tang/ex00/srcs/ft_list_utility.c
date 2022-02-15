/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utility.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:15:28 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 18:14:59 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "str_utility.h"
#include <stdlib.h>

t_list	*ft_create_list(int value, char c)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (!tmp)
		return (0);
	tmp->value = value;
	tmp->c = c;
	tmp->next = NULL;
	return (tmp);
}

void	ft_list_push_front(t_index *index_key, int value, char c)
{
	t_list	*tmp;

	tmp = ft_create_list(value, c);
	tmp->next = index_key->begin;
	index_key->begin = tmp;
}

void	ft_list_push_back(t_index *index_key, int value, char c)
{
	t_list	*tmp;

	tmp = ft_create_list(value, c);
	if (index_key->end != NULL)
	{
		index_key->end->next = tmp;
		index_key->end = tmp;
	}
	else
	{
		index_key->begin = tmp;
		index_key->end = tmp;
	}
}

void	ft_free_list(t_index *index_key)
{
	t_list	*tmp;
	t_list	*current;

	if (index_key->begin != NULL)
	{
		current = index_key->begin;
		while (current != NULL)
		{
			tmp = current->next;
			free(current);
			current = tmp;
		}
	}
}

void	ft_print_list(t_index *index_key)
{
	t_list	*current;

	current = index_key->begin;
	while (current != NULL)
	{
		ft_putnbr(current->value);
		current = current->next;
	}
}
