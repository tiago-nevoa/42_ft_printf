/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:29:49 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/21 18:07:42 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (int)ft_strlen(s) + 1);
	if (!str)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	my_func(unsigned int i, char str)
{
	(void) i;
	return (str - 32);
}

int	main(void)
{
	char str[10] = "helloz";
	printf("Original: <%s>\n", str);
	char *result = ft_strmapi(str, my_func);
	printf("Result: <%s>\n", result);
return (0);
}
*/
