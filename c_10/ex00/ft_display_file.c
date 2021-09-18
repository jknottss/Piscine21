/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:37:13 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/13 20:06:55 by jknotts          ###   ########.fr       */
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

int	err_cheaker(int argc)
{
	if (argc == 1)
	{
		ft_putstr(2, "File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		desc;
	int		ret;
	char	buf[100];

	(void) argc;
	if (!(err_cheaker(argc)))
		return (1);
	desc = open(argv[1], O_RDONLY);
	ret = read(desc, buf, 99);
	if (ret == -1)
	{
		ft_putstr(2, "Cannot read file.\n");
		return (1);
	}
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(1, buf);
		ret = read(desc, buf, 99);
	}
	close(desc);
	return (0);
}
