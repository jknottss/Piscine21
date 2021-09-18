/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:06:13 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/07 13:35:34 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb >= 0)
	{
		while (nb >= 1)
		{
			return (nb * ft_recursive_factorial(nb - 1));
		}
		return (res);
	}
	return (0);
}
