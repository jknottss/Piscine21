/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:55:00 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/03 20:16:56 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count != n && src[count] != '\0')
	{
		dest[count] = src[count];
		count ++;
	}
	if (count < n)
	{
		dest[count] = '\0';
		count ++;
	}
	return (dest);
}
