/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:21:26 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/13 18:03:48 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int n)
{
	char	*str;
	int		len;

	str = ft_itoa(n);
	if (!str)
		return (0);
	len = ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
