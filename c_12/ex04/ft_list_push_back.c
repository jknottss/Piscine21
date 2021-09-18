/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 19:05:34 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/16 21:25:30 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node;
	t_list	*last;

	node = ft_create_elem(data);
	last = ft_list_last(begin_list);
	last->next = node;
}
