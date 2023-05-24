/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:58:50 by smarco            #+#    #+#             */
/*   Updated: 2023/02/01 19:52:55 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdint.h>
# include <stdarg.h>

int				ft_check(va_list arg, const char *str, int len);
int				ft_printf(const char *str, ...);
int				ft_putchar(int c);
ssize_t			ft_hexa(unsigned int num, int maj);
int				ft_compare(const char c, va_list arg);
ssize_t			ft_void(uintptr_t num);
int				ft_count_digit(int num);
int				int_min(int n);
int				ft_putnbr(int n);
int				ft_putstr(char *str);

unsigned int	ft_unsigned(unsigned int num);
#endif
