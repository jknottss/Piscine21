/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 21:01:51 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/03 22:24:20 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;
	int	alpha;

	count = 0;
	alpha = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			alpha++;
		}
		else if (str[count] >= 'a' && str[count] <= 'z')
		{
			alpha++;
		}
		count++;
	}
	if (alpha == count)
		return (1);
	else
		return (0);
}
