/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:36:39 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/09 20:25:48 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src [i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char		dst1[20];
	char		dst2[20];
	const char	src[] = "Amazing";

	ft_strlcpy(dst1, src, 20);
	strlcpy(dst2, src, 20);
	printf("Res <%s>\nOri <%s>\n", dst1, dst2);
}
*/
