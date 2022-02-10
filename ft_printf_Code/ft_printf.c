/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:33:08 by tferreir          #+#    #+#             */
/*   Updated: 2022/02/10 17:45:12 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	i;

	i = -1;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			++i;
			if (format[i] == 'c')
				ft_putstr_fd("!caracter!", 1);
			else if (format[i] == 's')
				ft_putstr_fd("!string!", 1);
			else if (format[i] == 'p')
				ft_putstr_fd("!pointer!", 1);
			else if (format[i] == 'd')
				ft_putstr_fd("!decimal!", 1);
			else if (format[i] == 'i')
				ft_putstr_fd("!integer!", 1);
			else if (format[i] == 'u')
				ft_putstr_fd("!unsigned_decimal!", 1);
			else if (format[i] == 'x')
				ft_putstr_fd("!hexadecimal_lower!", 1);
			else if (format[i] == 'X')
				ft_putstr_fd("!hexadecimal_upper!", 1);
			else if (format[i] == '%')
				ft_putchar_fd('%', 1);
		}
		else
			ft_putchar_fd(format[i], 1);
	}
	return (0);
}
/*
int	main(void)
{
	const char	format[50] = "ABC 123 %d  %c fdsfds %u ][ :\' -/*";

	ft_printf(format);
	return (0);
}
*/
