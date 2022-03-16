/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:29:18 by tiago_nevoa       #+#    #+#             */
/*   Updated: 2022/03/16 20:52:03 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// gcc **/*.c

int	main(void)
{
	int	counter;

	counter = 0;
	counter = ft_printf("unsigned int:%u int:%d hexa:%x", -15, -15, -15);
	printf("\nN_caracters: %d \n", counter);
	counter = printf("unsigned int:%u int:%d hexa:%x", -15, -15, -15);
	printf("\nN_caracters: %d \n", counter);
	return (0);
}
