/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:14:53 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/07 12:28:57 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_minuscount(char *str)
{
	int	minus;
	int	count;

	minus = 0;
	count = 0;
	while (!(str[count] >= 48 && str[count] <= 57))
	{
		if ((str[count] != 32) && (str[count] != '+') && (str[count] != '-'))
		{
			if (!(str[count] >= 9 && str[count] <= 13))
				return (-1);
		}
		if (str[count] == '-')
			minus++;
		count++;
	}
	return (minus);
}

int	ft_start(char *str)
{
	int	count;

	count = 0;
	while (!(str[count] >= 48 && str[count] <= 57))
	{
		count++;
	}
	while (str[count] >= 48 && str[count] <= 57)
	{
		count++;
	}
	count--;
	return (count);
}

int	ft_atoi(char *str)
{
	int	count;
	int	res;
	int	minus;
	int	depth;

	depth = 1;
	res = 0;
	minus = ft_minuscount(str);
	count = ft_start(str);
	if (minus < 0)
		return (0);
	while (str[count] >= 48 && str[count] <= 57)
	{
		res += (str[count] - '0') * depth;
		depth *= 10;
		--count;
	}
	if (minus % 2 != 0)
	{
		res = -res;
	}
	return (res);
}
