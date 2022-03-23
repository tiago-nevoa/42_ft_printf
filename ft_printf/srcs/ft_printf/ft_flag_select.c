/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_select.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:07:58 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/23 20:26:58 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_flag_select(char flag, va_list arguments, int fd)
{
	if (flag == 'c')
		return (ft_putchar_fd(va_arg(arguments, int), fd));
	else if (flag == 's')
		return (ft_putstr_fd(va_arg(arguments, char *), fd));
	else if (flag == 'p')
		return (ft_putaddrs_fd(va_arg(arguments, unsigned long), fd));
	else if (flag == 'd' || flag == 'i')
		return (ft_putnbr_fd(va_arg(arguments, int), fd));
	else if (flag == 'u')
		return (ft_putunsigned_fd(va_arg(arguments, unsigned int), fd));
	else if (flag == 'x' || flag == 'X')
		return (ft_puthex_fd(va_arg(arguments, unsigned int), flag, fd));
	else if (flag == '%')
		return (ft_putchar_fd('%', fd));
	return (0);
}
