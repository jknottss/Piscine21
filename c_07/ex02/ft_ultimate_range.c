/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:47:41 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/09 19:27:27 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	cap;
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = (void *) 0;
		return (0);
	}
	i = 0;
	cap = max - min;
	tab = malloc(sizeof(int) * cap);
	if (tab == NULL)
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}
