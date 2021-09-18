/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:35:25 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/08 13:35:07 by jknotts          ###   ########.fr       */
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

	count = argc - 1;
	while (argv[count] != argv[0])
	{
		ft_putchar(argv[count]);
		--count;
	}
}
