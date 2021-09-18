/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:43:02 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/15 19:18:13 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while ((s1[count]) && (s1[count] == s2[count]))
	{
		count++;
	}
	return (s1[count] - s2[count]);
}

int	ft_strlen(char **tab)
{
	int	count;

	count = 0;
	while (tab[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[j], tab[j + 1]) > 0 && tab[j] != '\0')
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
