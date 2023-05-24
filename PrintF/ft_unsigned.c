/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:07:07 by smarco            #+#    #+#             */
/*   Updated: 2023/01/31 22:07:11 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

unsigned int	ft_unsigned(unsigned int num)
{
	int	let;

	let = 0;
	if (num > 9)
	{
		let = ft_unsigned(num / 10);
		if (let == -1)
			return (-1);
		num = num % 10;
	}
	if (num <= 9)
	{
		if (ft_putchar (('0' + num)) == -1)
			return (-1);
		let++;
	}
	return (let);
}
