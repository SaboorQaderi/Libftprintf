/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:02:17 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/19 14:45:26 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c, int fd);
int		ft_putstr(const char *s);
void	ft_putnbr(int n, int fd, int *count);
int		ft_put_unsigned(unsigned int n);
int		ft_put_hex(unsigned long n, char format, int *count);
int		ft_handle_format(char specifier, va_list args);
int		ft_putptr(void *ptr);

#endif