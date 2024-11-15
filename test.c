/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 02:59:05 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/15 04:22:05 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putchar(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	ft_putstr(char *str, int fd)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (str[count])
	{
		write (fd, &str[count], 1);
		count++;
	}
	return (count);
}

int	handle(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (specifier == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	// else if (specifier == 'p')
	// 	return ()
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			count += handle(format[i], args);
		}
		else
			count += ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	ft_printf("%c\n", 'a');
	ft_printf("%s\n", "Hello, world!");
	ft_printf("No format specifier here.\n");
	ft_printf("%s\n", NULL);
	return (0);
}
