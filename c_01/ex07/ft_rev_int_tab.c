/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 18:57:37 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/02 20:00:09 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = 0;
	temp = 0;
	while (count < size)
	{
		temp = tab[count];
		tab[count] = tab[size - 1];
		tab[size - 1] = temp;
		count++;
		--size;
	}
}
