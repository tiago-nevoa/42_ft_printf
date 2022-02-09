/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:10:23 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/21 17:51:31 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;
	size_t			s_len;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	if (len > s_len)
		len = s_len;
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	if (s_len > start)
	{
		while (i < len && s[start + i] != '\0')
		{
			p[i] = s[start + i];
			i++;
		}
	}
	p[i] = '\0';
	return (p);
}
/*
int	main(void)
{
	char		*dst;
	const char	src[] = "Machines will destroy the world";

	dst = ft_substr(src, 5, ft_strlen(src));
	printf("Res <%s>\n", dst);
}
*/
