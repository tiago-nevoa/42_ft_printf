/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago_nevoa <tiago_nevoa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:33:08 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/05 15:44:30 by tiago_nevoa      ###   ########.fr       */
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
			ft_flag_select(format[i], arguments);
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
	ft_printf("ABC 123 %d  %c fdsfds %u ] %s [ :\' -/*", 8, 'h', 12, "ccm_always");
	printf("\n");
	printf("ABC 123 %d  %c fdsfds %u ] %s [ :\' -/*", 5, 'h', 6, "ccm_always");
	printf("\n'");
	printf("%p\n", &a);
	return (0);
}
