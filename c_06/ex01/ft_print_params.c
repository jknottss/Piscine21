/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:48:40 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/08 11:32:45 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	count;

	(void) argc;
	count = 1;
	while (argv[count])
	{
		ft_putchar(argv[count]);
		count++;
	}
	return (0);
}
