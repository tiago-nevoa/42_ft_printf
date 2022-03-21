/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:56:18 by tiago_nevoa       #+#    #+#             */
/*   Updated: 2022/03/21 15:25:14 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_check_base(char *base)
{
	int		i;
	int		j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || !ft_isprint(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_putnbr_base(int nbr, char *base)
{
	long	nbr_l;
	char	nbr_c[32];
	int		base_divider;
	int		i;
	int		c;

	c = 0;
	if (!ft_check_base(base))
		return (c);
	base_divider = ft_strlen(base);
	if (nbr < 0)
	{
		nbr_l = nbr;
		nbr_l = -nbr_l;
		ft_putchar_fd ('-', 1);
		c++;
	}
	else
		nbr_l = nbr;
	i = 0;
	while (nbr_l > 0)
	{
		nbr_c[i] = base[nbr_l % base_divider];
		nbr_l /= base_divider;
		i++;
	}
	while (--i >= 0)
	{
		ft_putchar_fd(nbr_c[i], 1);
		c++;
	}
	return (c);
}

// int main (void)
// {
// 	int c;

// 	c = ft_putnbr_base(21071989,"123456789abcdef");
// 	printf ("\nN_caracters: %d", c);
// 	return (0);
// }
