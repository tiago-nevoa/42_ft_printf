/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:23:56 by tferreir          #+#    #+#             */
/*   Updated: 2022/02/10 19:12:41 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

double	average(int num, ...)
{
	va_list	arguments;
	double	sum = 0;

	va_start (arguments, num);
	for (int x = 0; x < num; x++)
	{
		printf ("x: %d sum: %f num: %d\n", x, sum, num);
		sum += va_arg (arguments, double);
	}
	va_end (arguments);
	return (sum / num);
}

int	main(void)
{
	printf ("%f\n", average (3, 12.2, 22.3, 4.5));
	printf ("%f\n", average (5, 3.3, 2.2, 1.1, 5.5, 3.3));
	return (0);
}
