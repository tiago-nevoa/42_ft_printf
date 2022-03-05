/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago_nevoa <tiago_nevoa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:39:27 by tferreir          #+#    #+#             */
/*   Updated: 2022/03/05 17:51:31 by tiago_nevoa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define  FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *format, ...);

int		ft_flag_select(char flag, va_list arguments);
int		ft_putchar_fd(char c, int fd);
int		main(void);

#endif
