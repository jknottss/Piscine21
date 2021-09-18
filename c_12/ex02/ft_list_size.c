/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:30:27 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/16 18:01:27 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
int	ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*tmp;

	count = 0;
	tmp = begin_list;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
