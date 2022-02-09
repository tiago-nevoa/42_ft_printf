/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:01:49 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/10 16:46:55 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*m1;
	unsigned char	*m2;

	m1 = (unsigned char *)s1;
	m2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*m1 == *m2 && n-- > 0)
	{
		m1++;
		m2++;
		if (n == 0)
			return (0);
	}
	return (*m1 - *m2);
}
/*
int	main(void)
{
	const char	str1[15] = "abcdefghij";
	const char	str2[15] = "abcdefgxyz";
	int			ret;

	ret = ft_memcmp(str1, str2, 7);
	if (ret < 0)
	{
		printf("str1 is less than str2");
	}
	else if (ret > 0)
	{
		printf("str2 is less than str1");
	}
	else
	{
		printf("str1 is equal to str2");
	}
	return (0);
}
*/
