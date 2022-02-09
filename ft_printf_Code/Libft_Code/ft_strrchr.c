/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:56:54 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/20 20:10:07 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((char) c == '\0')
		return ((char *)(s + i));
	while (i-- > 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	src[50] = "0123456789ABC0123456789DEF0123456789GHJ";

	printf("Before strrchr dest = %s\n", src);
	printf("After ft_strrchr dest = %s\n", ft_strrchr(src, '\0'));
	printf("After strrchr dest = %s\n", strrchr(src, '\0'));
	return (0);
}
*/
