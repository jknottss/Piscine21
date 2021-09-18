/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:19:22 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/16 19:56:35 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
void	ft_list_push_front(t_list **begin_list, void *data))
{
	t_list	*node;

	node = ft_create_elem(data);
	node->next = *begin_list;
	*begin_list = node;
}
