/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:32:40 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/15 17:22:02 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_start(char *str)
{
	int	count;

	count = 0;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == ' ')
	{
		count++;
	}
	return (count);
}

int	ft_atoi(char *str)
{
	int	count;
	int	minus;
	int	res;

	minus = 1;
	res = 0;
	count = ft_start(str);
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			minus *= -1;
		count++;
	}
	while (str[count] > 47 && str[count] < 58 )
	{
		res = (res * 10) + (str[count] - '0');
		count++;
	}
	return (res * minus);
}
