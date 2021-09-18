/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:08:16 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/08 19:07:37 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0 && nb == 1)
		return (1);
	if (power < 0 && nb == -1)
	{
		if (power % 2 == 0)
			return (1);
		return (-1);
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power % 2 == 0)
		return (ft_recursive_power(nb * nb, power / 2));
	return (ft_recursive_power(nb * nb, power / 2) * nb);
}
