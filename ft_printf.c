/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:02:39 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/19 14:53:05 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_format(char specifier, va_list args)
{
	int		count;

	count = 0;
	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int), 1));
	else if (specifier == 's')
		return (ft_putstr(va_arg(args, const char *)));
	else if (specifier == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (specifier == 'd' || specifier == 'i')
	{
		ft_putnbr(va_arg(args, int), 1, &count);
		return (count);
	}
	else if (specifier == 'u')
		return (ft_put_unsigned(va_arg(args, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
	{
		ft_put_hex(va_arg(args, unsigned int), specifier, &count);
		return (count);
	}
	else if (specifier == '%')
		return (ft_putchar('%', 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;
	int		printed;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			printed = ft_handle_format(format[i], args);
			count += printed;
		}
		else
			count += ft_putchar(format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
