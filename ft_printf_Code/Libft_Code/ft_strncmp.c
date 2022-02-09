/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:46:35 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/21 17:38:00 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 != '\0' && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
int	main(void)
{
	const char	str1[15] = "abcdef";
	const char	str2[15] = "ABCDEF";
	int			ret;

	ret = strncmp(str1, str2, 4);
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
