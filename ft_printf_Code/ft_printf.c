/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:33:08 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/03 20:33:34 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	arguments;
	va_start (arguments, format);

	i = -1;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			++i;
			if (format[i] == 'c')
				ft_putchar_fd(va_arg(arguments, char), 1);
			else if (format[i] == 's')
				ft_putstr_fd(va_arg(arguments, char *), 1);
			else if (format[i] == 'p') // Pointer location in memo on Hexa Ex: 0x7ffee9d48938
				ft_putstr_fd("!pointer!", 1);
			else if (format[i] == 'd')
				ft_putnbr_fd(va_arg(arguments, int), 1);
			else if (format[i] == 'i') // check difference from decimal and integer
				ft_putnbr_fd(va_arg(arguments, int), 1);
			else if (format[i] == 'u') // usigned int
				ft_putnbr_fd(va_arg(arguments, unsigned int), 1);
			else if (format[i] == 'x') // convert to Hex with lowCase
				ft_putstr_fd("!hexadecimal_lower!", 1);
			else if (format[i] == 'X') // convert to Hex with UpperCase
				ft_putstr_fd("!hexadecimal_upper!", 1);
			else if (format[i] == '%') // print '%'
				ft_putchar_fd('%', 1);
		}
		else
			ft_putchar_fd(format[i], 1);
	}
	va_end (arguments);
	return (0);
}

int	main(void)
{
	int	a;

	a = 452;
	ft_printf("ABC 123 %d  %c fdsfds %u ][ :\' -/*", 7, 'h', 8);
	printf("\n");
	printf("ABC 123 %d  %c fdsfds %u ][ :\' -/*", 5, 'h', 6);
	printf("\n'");
	printf("%p\n", &a);
	return (0);
}
