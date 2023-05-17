/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguisado <lguisado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:41:20 by lguisado          #+#    #+#             */
/*   Updated: 2022/10/10 19:22:44 by lguisado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

/*	--	 ft_printf.c	--	*/
int		ft_convert(va_list list, char type);
int		ft_printf(char const *str, ...);

/*	--	 ft_prints.c	--	*/
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nbr);
int		ft_putunbr(unsigned int nbr);

/*	--	 ft_conts.c	--	*/
int		ft_nbrlen(int nbr);
int		ft_unbrlen(unsigned int nbr);
int		ft_hexnbrlen(unsigned int nbr);
int		ft_ptrlen(unsigned long long nbr);

/*	--	 ft_printhex.c	--	*/
int		ft_puthex(unsigned int nbr, char format);
int		ft_putptr(unsigned long long nbr);
void	ft_puthexptr(unsigned long long nbr);

#endif