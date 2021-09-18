/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:30:44 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/15 16:57:16 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H
# include <unistd.h>
int		ft_atoi(char *str);
void	ft_start(char *str);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_summ(int a, int b);
void	ft_diff(int a, int b);
void	ft_div(int a, int b);
void	ft_mod(int a, int b);
void	ft_mult(int a, int b);
void	ft_check_operator(char **argv, int arg, int arg2);
#endif
