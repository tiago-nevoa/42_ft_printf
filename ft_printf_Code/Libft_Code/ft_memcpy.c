/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:58:02 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/21 17:25:01 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dst && !src)
		return (NULL);
	d = dst;
	s = src;
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}
/*
int	main(void)
{
	const char	src[50] = "0123456789";
	char		dst[50] = "9876543210";

	printf("Before ft_memcpy dest = %s\n", dst);
	printf("After ft_memcpy dest = %s\n", ft_memcpy(dst, src, 5));
	return (0);
}
*/
