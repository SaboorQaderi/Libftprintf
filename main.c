/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:54:18 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/18 17:06:17 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("Character: %c\n", 'A');
	ft_printf("String: %s\n", "Hello, world!");
	ft_printf("Pointer: %p\n", main);
	ft_printf("Decimal: %d\n", 42);
	ft_printf("Integer: %i\n", -42);
	ft_printf("Unsigned: %u\n", 3000000000U);
	ft_printf("Hex (lower): %x\n", 255);
	ft_printf("Hex (upper): %X\n", 255);
	ft_printf("Percent: %%\n");
	return (0);
}
