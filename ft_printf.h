/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:02:17 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/13 15:08:09 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_print_char(char c);
int		ft_print_hex(unsigned int n, char format);
int		ft_print_number(int n);
int		ft_print_pointer(void *ptr);
int		ft_pirnt_string(char *str);
int		ft_print_unsigned(unsigned int n);
int		ft_handle_format(char specifier, va_list args);

#endif