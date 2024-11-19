/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:59:27 by abqaderi          #+#    #+#             */
/*   Updated: 2024/11/19 14:46:02 by abqaderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

int	ft_putstr(char const *s)
{
	if (s == NULL)
		return (write(1, "(null)", 6));
	if (s[0] == '\0')
		return (0);
	return (write(1, s, ft_strlen(s)));
}
