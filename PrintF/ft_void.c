/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:04:20 by smarco            #+#    #+#             */
/*   Updated: 2023/02/01 19:38:42 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static ssize_t	ft_sizeofint(uintptr_t n)
{
	int	size;

	size = 0;
	while (n > 0)
	{
		n /= 16;
		size++;
	}
	return (size);
}

static char	*extract(uintptr_t n, char *str, ssize_t size)
{
	while (--size >= 0)
	{
		str[size] = ("0123456789abcdef"[n % 16]);
		n /= 16;
	}
	return (str);
}

ssize_t	ft_void(uintptr_t num)
{
	ssize_t		size;
	char		*str;

	if (num == 0)
		return (ft_putstr("0x0"));
	if (ft_putchar('0') < 0)
		return (-1);
	if (ft_putchar('x') < 0)
		return (-1);
	size = ft_sizeofint(num);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (-1);
	str[size] = '\0';
	str = extract(num, str, size);
	if (!str)
		return (-1);
	size = ft_putstr(str) + 2;
	free(str);
	return (size);
}
