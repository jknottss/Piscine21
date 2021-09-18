/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:17:35 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/14 14:19:38 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int(*f)(int))
{
	int	count;
	int	*modtab;

	count = 0;
	modtab = malloc(sizeof(int) * lenght);
	while (count < lenght)
	{
		modtab[count] = (*f)(tab[count]);
		count++;
	}
	return (modtab);
}
