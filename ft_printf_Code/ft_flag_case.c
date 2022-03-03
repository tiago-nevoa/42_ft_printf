/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_case.c                                     :+:      :+:    :+:   */
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
void	ft_flag_case(char flag, va_list arguments)
{
	if (flag == 'c')
		ft_putchar_fd(va_arg(arguments, int), 1);
	else if (flag == 's')
		ft_putstr_fd(va_arg(arguments, char *), 1);
	else if (flag == 'p')
		ft_putstr_fd("!pointer!", 1);
	else if (flag == 'd')
		ft_putnbr_fd(va_arg(arguments, int), 1);
	else if (flag == 'i')
		ft_putnbr_fd(va_arg(arguments, int), 1);
	else if (flag == 'u')
		ft_putnbr_fd(va_arg(arguments, unsigned int), 1);
	else if (flag == 'x')
		ft_putstr_fd("!hexadecimal_lower!", 1);
	else if (flag == 'X')
		ft_putstr_fd("!hexadecimal_upper!", 1);
	else if (flag == '%')
		ft_putchar_fd('%', 1);
}
