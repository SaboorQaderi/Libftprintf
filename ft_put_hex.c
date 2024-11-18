/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:28:05 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/18 16:16:45 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned int n, char format)
{
	char	*hex_digits;
	char	hex[9];
	int		i;

	if (format == 'x')
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (n == 0)
		return (ft_putchar('0', 1));
	i = 8;
	hex[i] = '\0';
	while (n)
	{
		hex[--i] = hex_digits[n % 16];
		n /= 16;
	}
	return (ft_putstr(&hex[i], 1));
}
