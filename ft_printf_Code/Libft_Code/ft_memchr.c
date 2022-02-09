/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:19:21 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/08 18:55:19 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	while (n-- > 0)
	{
		str = (unsigned char *)s;
		if (*str == (unsigned char)c)
		{
			return (str);
		}
		s++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "http://www.tutorialspoint.com";
	const char	ch = '.';
	char		*ret;

	ret = ft_memchr(str, ch, strlen(str));
	printf("ft_mechr:	String after |%c| is - |%s|\n", ch, ret);
	ret = memchr(str, ch, strlen(str));
	printf("mechr:		String after |%c| is - |%s|\n", ch, ret);
	return (0);
}
*/
