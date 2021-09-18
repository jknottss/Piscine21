/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:04:12 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/14 11:44:28 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(int des, char *str)
{
	write(des, str, ft_strlen(str));
}
int main()
{
	int i;
	int des;
	int ret;
	char buf[10];

	i = 1;
	(void) argc;
	while (i < argc)
	{
		des = open(argv[i], O_RDONLY);
		ret = read(des, buf, 9);
		i++;
		while (ret)
		{
			buf[ret] = '\0';
			ft_putstr(1, buf);
			ret = read(des, buf, 9);
		}
		close(des);
		return (0);
	}
}
