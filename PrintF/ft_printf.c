/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:03:19 by smarco            #+#    #+#             */
/*   Updated: 2023/02/03 15:42:04 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		result;

	result = 0;
	va_start(arg, str);
	result = ft_check(arg, str, result);
	va_end(arg);
	return (result);
}
