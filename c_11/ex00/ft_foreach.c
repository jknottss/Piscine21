/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:56:59 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/14 13:15:45 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int	*tab, int length, void (*f)(int))
{
	int	count;

	count = 0;
	while (count < length)
	{
		(*f)(tab[count]);
		count++;
	}
}
