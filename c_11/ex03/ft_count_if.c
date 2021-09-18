/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:02:25 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/14 16:28:46 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_count_if(char **tab, int length, int(*f)(char *))
{
	int	count;
	int	notnull;

	count = 0;
	notnull = 0;
	while (tab[count] != '\0' && count < length)
	{
		if ((*f)tab[count] != 0)
			notnull++;
		count++;
	}
	return (notnull);
}
