/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:24:07 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/14 16:29:02 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char*))
{
	int	count;

	count = 0;
	while (tab[i] != '\0')
	{
		if ((*f)(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
