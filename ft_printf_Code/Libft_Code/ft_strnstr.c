/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:00:35 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/21 16:01:01 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && (j + i) < len)
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	haystack[30] = "aaabcabcd";
	const char	needle[10] = "aabc";

	printf("Haystack:	%s\nNeedle:		%s\n", haystack, needle);
	printf("ft_strnstr:	%s\n", ft_strnstr(haystack, needle, 15));
	printf("strnstr:	%s\n", strnstr(haystack, needle, 15));
	write(1, "\n", 1);
}
*/
