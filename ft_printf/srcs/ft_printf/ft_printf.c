/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:33:08 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/18 18:23:16 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		counter;
	va_list	arguments;

	va_start (arguments, format);
	counter = 0;
	i = -1;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			++i;
			counter += ft_flag_select(format[i], arguments);
		}
		else
			counter += ft_putchar_fd(format[i], 1);
	}
	va_end (arguments);
	return (counter);
}
