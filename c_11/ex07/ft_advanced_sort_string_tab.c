/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:36:59 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/15 20:49:29 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_string_tab(char **tab, int(*cmp)(char, char))
{
	int		j;
	char	*temp;
	int		fl;
	int		len;

	j = 0;
	fl = 0;
	len = ft_strlen(tab);
	while (fl)
	{
		fl = 0;
		while (j < len - 1)
		{
			if ((*f)(tab[j], tab[j + 1]) > 0 && tab[j] != '\0')
			{
				temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
				fl = 1;
			}
			j++;
		}
		j = 0;
	}
}
