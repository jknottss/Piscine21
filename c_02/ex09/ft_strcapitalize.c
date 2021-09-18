/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:29:59 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/04 19:00:01 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_tolowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] > 64 && str[count] < 91)
		{
			str[count] += 32;
		}
		count++;
	}
	printf("%s", str);
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_tolowercase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str [i] < 123)
		{
			str[i] -= 32;
			i++;
		}
		while ((str[i] > 96 && str [i] < 123) || (str[i] > 47 && str[i] < 58))
		{
			i++;
		}
		i++;
	}
	return (str);
}
