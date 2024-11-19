/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:28:05 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/19 03:09:08 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned long n, char format, int *count)
{
	char	*hex_digits;

	if (format == 'x')
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (n >= 16)
		ft_put_hex(n / 16, format, count);
	*count += ft_putchar(hex_digits[n % 16], 1);
	return (*count);
}
