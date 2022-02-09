/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:33:08 by tferreir          #+#    #+#             */
/*   Updated: 2022/02/09 20:26:07 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

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
			if (format[i] == 's')
				ft_putstr_fd("!string!", 1);
			if (format[i] == 'p')
				ft_putstr_fd("!pointer!", 1);
			if (format[i] == 'd')
				ft_putstr_fd("!decimal!", 1);
			if (format[i] == 'i')
				ft_putstr_fd("!integer!", 1);
			if (format[i] == 'u')
				ft_putstr_fd("!unsigned_decimal!", 1);
			if (format[i] == 'x')
				ft_putstr_fd("!hexadecimal_lower!", 1);
			if (format[i] == 'X')
				ft_putstr_fd("!hexadecimal_upper!", 1);
			if (format[i] == '%')
				ft_putchar_fd('%', 1);
		}
		else
			ft_putchar_fd(format[i], 1);
	}
	return (0);
}

int	main(void)
{
	const char	format[50] = "ABC 123 %d  %c fdsfds %u ][ :\' -/*";

	ft_printf(format);
	return (0);
}
