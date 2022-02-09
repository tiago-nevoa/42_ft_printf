/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:56:48 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/20 17:02:26 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_counter(long int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	n = -n;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	if (n < 0)
		i = 1;
	len = digit_counter(n) + i;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
		str[len] = '\0';
	while (len-- != i)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
/*
int	main(void)
{
	char	*dest;
	int		nbr;

	nbr = 6738573;
	dest = ft_itoa(nbr);
	printf("Res: <%s> Num: <%d>\n", dest, nbr);
	nbr = -6738573;
	dest = ft_itoa(nbr);
	printf("Res: <%s> Num: <%d>\n", dest, nbr);
	nbr = 54125485;
	dest = ft_itoa(nbr);
	printf("Res: <%s> Num: <%d>\n", dest, nbr);
	nbr = 0;
	dest = ft_itoa(nbr);
	printf("Res: <%s> Num: <%d>\n", dest, nbr);
}
*/
