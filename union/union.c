/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:37:57 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/19 17:04:14 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_is_in_str(char c, char array[128])
{
	int	i;

	i = 0;
	while (i < 128)
	{
		if (array[i] == c && array[i] > 32)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int 	i;
	int 	j;
	int		k;

	k = 0;
	j = 0;
	char array[128];
	if(argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (i < 129)
	{
		array[i] = '\0';
		i++;
	}
	i = 1;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (ft_is_in_str(argv[i][j], array) == 0)
			{
				write(1, &argv[i][j], 1);
				array[k] = argv[i][j];
				k++;
			}
			j++;
		}
		i++;
		j = 0;

	}
	return (0);
} 
