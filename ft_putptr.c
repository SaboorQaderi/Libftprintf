/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:16:24 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/18 16:20:05 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	address;
	int				count;

	address = (unsigned long)ptr;
	if (!ptr)
	{
		count = ft_putstr("0x0", 1);
		return (count);
	}
	count = ft_putstr("0x0", 1);
	count += ft_put_hex(address, 'x');
	return (count);
}
