/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:28:17 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/14 18:09:42 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	count;

	count = 0;
	while (count < length - 1)
	{
		if ((*f)(tab[count], tab[count + 1] > 0))
			return (0);
		count++;
	}
	return (1);
}
