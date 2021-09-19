/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:27:52 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/19 18:50:49 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_wdmatch(char *s1, char *s2)
{
	int	i;
	int j;
	int len;

	len = 0;
	i = 0;
	j = 0;
	while(s1[len] != '\0')
		len++;
	while (s2[j] != '\0' && i < len)
	{
		if (s1[i] == s2[j])
		{
			i++;
		}
		j++;
	}
	if (i == len)
		ft_putstr(s1);
	else
		write(1, "\n", 1);


}

int main(int argc, char **argv)
{

	if (argc == 3)
		ft_wdmatch(argv[1], argv[2]);
	return (0);
}
