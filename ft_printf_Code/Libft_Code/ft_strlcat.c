/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:08:18 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/14 16:32:24 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size;
	size_t	maxlen;

	size = dstsize;
	maxlen = ft_strlen(dst)+ ft_strlen(src);
	while (*dst && size > 0)
	{
		dst++;
		size--;
	}
	if (size == 0)
		return (ft_strlen(src) + dstsize);
	while (*src && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = 0;
	return (maxlen);
}
/*
int	main(void)
{
	char			dst[30] = "Amazing";
	const char		src[5] = "Tits ";
	const char		src1[20] = "&& Round Ass";
	size_t			n;

	n = ft_strlcat(dst, src, 30);
	printf("ft_strlcat	<%s> : %zu \n", dst, n);
	n = strlcat(dst, src1, 20);
	printf("strlcat		<%s> : %zu \n", dst, n);
}
*/
