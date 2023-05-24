/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:04:20 by smarco            #+#    #+#             */
/*   Updated: 2023/05/10 14:34:57 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static ssize_t	ft_sizeofint(unsigned int n)
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

ssize_t	ft_hexa(unsigned int num, int maj)
{
	ssize_t		size;
	char		*str;

	if (num == 0)
		return (ft_putchar('0'));
	size = ft_sizeofint(num);
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (-1);
	str[size--] = '\0';
	while (num)
	{
		if (!maj)
			str[size--] = ("0123456789abcdef"[num % 16]);
		else
			str[size--] = ("0123456789ABCDEF"[num % 16]);
		num /= 16;
	}
	size = ft_putstr(str);
	free(str);
	return (size);
}
