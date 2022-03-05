/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_select.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:07:58 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/03 23:31:53 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
return int lenght of char on console
'p' Pointer location in memo on Hexa Ex: 0x7ffee9d48938
'i' check difference from decimal and integer
'u' usigned int
'x' convert to Hex with lowCase
'X' convert to Hex with UpperCase
'%' print '%'
*/
int	ft_flag_select(char flag, va_list arguments)
{
	if (flag == 'c')
		return (ft_putchar_fd(va_arg(arguments, int), 1));
	else if (flag == 's')
		return (ft_putstr_fd(va_arg(arguments, char *), 1));
	else if (flag == 'p')
		return (ft_putstr_fd("!pointer!", 1));
	else if (flag == 'd')
		return (ft_putnbr_fd(va_arg(arguments, int), 1));
	else if (flag == 'i')
		return (ft_putnbr_fd(va_arg(arguments, int), 1));
	else if (flag == 'u')
		return (ft_putnbr_fd(va_arg(arguments, unsigned int), 1));
	else if (flag == 'x')
		return (ft_putstr_fd("!hexadecimal_lower!", 1));
	else if (flag == 'X')
		return (ft_putstr_fd("!hexadecimal_upper!", 1));
	else if (flag == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}
