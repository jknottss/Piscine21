/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:48:16 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/08 17:41:16 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;
	int	res;

	res = 1;
	count = 0;
	while (count < nb / 2)
	{
		if (res * res == nb)
			return (res);
		res++;
		count++;
	}
	return (0);
}
