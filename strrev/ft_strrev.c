/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:37:47 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/20 13:17:06 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

void	ft_strrev(char *str)
{
	int	i;
	int j;
	char temp;

	i = 0;
	j = ft_strlen(str);
	while(j >= i)
	{
		temp = str[j - 1];
		str[j - 1] = str[i];
		str[i] = temp;
		i++;
		--j;
	}
}

#include <stdio.h>
int main()
{
	char str[] = "reverse";
	ft_strrev(str);
	printf("%s\n", str);
	return (0);
}
