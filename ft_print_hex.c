/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:28:05 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/13 14:33:45 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char format)
{
	char	*hex_digits;
	char	hex[9];
	int		count;
	int		i;

	count = 0;
	if (format == 'x')
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (n == 0)
	{
		count += ft_print_char('0');
		return (count);
	}
	i = 8;
	hex[i] = '\0';
	while (n)
	{
		hex[--i] = hex_digits[n % 16];
		n /= 16;
	}
	ft_putstr_fd(&hex[i], 1);
	count += 8 - i;
	return (count);
}
