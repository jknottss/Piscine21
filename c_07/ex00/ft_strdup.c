/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 10:41:51 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/09 18:28:01 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcp(char *dest, char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		dest[count] = str[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	int		count;
	char	*dest;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	dest = malloc(sizeof (*str) * count + 1);
	if (dest == NULL)
		return (dest);
	dest = ft_strcp(dest, str);
	return (dest);
}
