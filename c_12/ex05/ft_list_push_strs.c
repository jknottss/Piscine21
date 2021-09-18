/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 21:54:18 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/16 22:47:11 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
t_list	*ft_list_push_strs(int size, char **strs)
{
	int		count;
	t_list	*node;
	t_list	*temp;
	t_list	*first;

	if (size < 1)
		return (0);
	count = size - 2;
	temp = ft_create_elem(strs[size - 1]);
	first = temp;
	while (count >= 0)
	{
		node = ft_create_elem(strs[count]);
		temp->next = node;
		temp = node;
		count--;
	}
	return (first);
}
