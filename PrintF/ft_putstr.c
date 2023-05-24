/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:30:27 by smarco            #+#    #+#             */
/*   Updated: 2023/01/31 21:14:01 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		if (write(1, "(null)", 6) != 6)
			return (-1);
		return (6);
	}
	while (s[i])
	{
		if (ft_putchar(s[i]) != 1)
			return (-1);
		i++;
	}
	return (i);
}
