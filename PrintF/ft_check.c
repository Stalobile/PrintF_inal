/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:02:20 by smarco            #+#    #+#             */
/*   Updated: 2023/02/01 19:52:41 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_compare(const char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(arg, int)));
	else if (c == 'p')
		return (ft_void(va_arg(arg, uintptr_t)));
	else if (c == 'u')
		return (ft_unsigned(va_arg(arg, unsigned int)));
	else if (c == 'x')
		return (ft_hexa(va_arg(arg, unsigned int), 0));
	else if (c == 'X')
		return (ft_hexa(va_arg(arg, unsigned int), 1));
	return (0);
}

int	ft_check(va_list arg, const char *str, int len)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			result = ft_compare(str[i + 1], arg);
			if (result == -1)
				return (-1);
			len += result;
			i++;
		}
		else
		{
			if (ft_putchar(str[i]) != 1)
				return (-1);
			len++;
		}
	i++;
	}
	return (len);
}
