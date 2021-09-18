/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:47:10 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/09 19:03:28 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	cap;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	cap = max - min;
	range = malloc(sizeof(int) * cap);
	if (range == NULL)
		return (range);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
