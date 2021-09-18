/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:00:21 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/15 17:15:15 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
void	ft_operation(int arg, int arg2, void(*f)(int, int))
{
	f(arg, arg2);
}

void	ft_check_operator(char **argv, int arg, int arg2)
{	
	void	(*op[5])(int, int);

	op[0] = &ft_summ;
	op[1] = &ft_diff;
	op[2] = &ft_div;
	op[3] = &ft_mod;
	op[4] = &ft_mult;
	if (argv[2][0] == '+' && argv[2][1] == '\0')
		ft_operation(arg, arg2, op[0]);
	else if (argv[2][0] == '-' && argv[2][1] == '\0')
		ft_operation(arg, arg2, op[1]);
	else if (argv[2][0] == '/' && argv[2][1] == '\0')
		ft_operation(arg, arg2, op[2]);
	else if (argv[2][0] == '%' && argv[2][1] == '\0')
		ft_operation(arg, arg2, op[3]);
	else if (argv[2][0] == '*' && argv[2][1] == '\0')
		ft_operation(arg, arg2, op[4]);
	else
		ft_putchar('0');
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int	arg;
	int	arg2;

	(void) argc;
	if (argc < 4)
		return (0);
	arg = ft_atoi(argv[1]);
	arg2 = ft_atoi(argv[3]);
	ft_check_operator(argv, arg, arg2);
	return (0);
}
