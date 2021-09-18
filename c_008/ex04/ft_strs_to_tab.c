/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:20:50 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/11 21:43:40 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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
	dest = malloc(sizeof(*str) * count + 1);
	if (dest == NULL)
		return (dest);
	dest = ft_strcp(dest, str);
	return (dest);
}

int	ft_lenght(int ac, char **av)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < ac)
	{
		len += ft_strlen(av[i]);
		i++;
	}
	return (len);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*mystr;
	int			len;

	len = ft_lenght(ac, av);
	mystr = malloc(sizeof(t_stock_str) * len);
	i = 0;
	while (i < ac)
	{
		mystr[i].size = ft_strlen(av[i]);
		mystr[i].str = av[i];
		mystr[i].copy = ft_strdup(av[i]);
		i++;
	}
	mystr[i].str = NULL;
	return (mystr);
}
