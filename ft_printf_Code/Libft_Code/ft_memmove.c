/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:14:32 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/10 15:47:21 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;
	char	*dest;

	tmp = (char *)src;
	dest = (char *)dst;
	if (tmp < dest)
	{
		while (len--)
			dest[len] = tmp[len];
	}
	else
		ft_memcpy(dest, tmp, len);
	return (dst);
}
/*
int	main(void)
{
	const char	src[50] = "0123456789";
	char		dst[50] = "9876543210";

	printf("Before ft_memmove dest = %s\n", dst);
	printf("After ft_memmove dest = %s\n", ft_memmove(dst, src, 5));
	return (0);
}
*/
