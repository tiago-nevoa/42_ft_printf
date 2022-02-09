/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:56:03 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/21 18:06:02 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			s1_len;
	unsigned int	begin;
	unsigned int	end;

	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	if (s1_len == 0)
		return (ft_strdup(""));
	begin = 0;
	end = s1_len - 1;
	while (ft_strchr(set, s1[begin]) != NULL)
	{
		if (begin++ > end)
			return (ft_strdup(""));
	}
	while (ft_strchr(set, s1[end]) != NULL)
	{
		if (end-- <= begin)
			return (ft_strdup(""));
	}
	return (ft_substr(s1, begin, end - begin + 1));
}
/*
int	main(void)
{
	char	*dest;
	char	*src;
	char	*sep;

	src = "#CMike#*";
	sep = " #*";
	dest = ft_strtrim(src, sep);
	printf("Res <%s>\n", dest);
}
*/
