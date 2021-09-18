/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:39:16 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/15 14:29:00 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
void	ft_summ(int a, int b)
{
	 ft_putnbr(a + b);
}

void	ft_diff(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_div(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(a / b);
}

void	ft_mod(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(a % b);
}

void	ft_mult(int a, int b)
{
	ft_putnbr(a * b);
}
