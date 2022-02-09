/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:54:57 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/21 19:27:54 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
void	my_func(unsigned int i, char *str)
{
	(void) i;
	*str -= 32;
}

int	main(void)
{
	const char	str[10] = "hello.";

	printf("Original: <%s>\n", str);
	ft_striteri(str, my_func);
	printf("Result: <%s>\n", str);
	return (0);
}
*/
