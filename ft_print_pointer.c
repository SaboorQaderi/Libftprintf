/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:16:24 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/13 18:06:18 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	unsigned long	address;
	int				count;

	count = 0;
	address = (unsigned long)ptr;
	count += ft_putstr_fd("0x", 1);
	if (address == 0)
		count += ft_putchar_fd('0', 1);
	else
		count += ft_print_hex(address, 'x');
	return (count);
}
