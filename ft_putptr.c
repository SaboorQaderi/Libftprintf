/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:16:24 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/19 14:53:38 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (write (1, "0x0", 3));
	count += write (1, "0x0", 2);
	ft_put_hex((unsigned long)ptr, 'x', &count);
	return (count);
}
