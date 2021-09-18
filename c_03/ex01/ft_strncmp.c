/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 09:39:38 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/05 15:06:44 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	{
		while ((s1[count]) && (s1[count] == s2[count]) && (count < n - 1))
		{
			count++;
		}
	}
	return (s1[count] - s2[count]);
}
