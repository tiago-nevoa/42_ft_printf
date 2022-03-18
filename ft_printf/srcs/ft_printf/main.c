/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:29:18 by tiago_nevoa       #+#    #+#             */
/*   Updated: 2022/03/18 18:25:25 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

// gcc **/*.c

int	main(void)
{
	int		counter;

	counter = 0;
	counter = ft_printf("pointer:%d", 10);
	printf("\nN_caracters: %d \n", counter);
	counter = printf("pointer:%d", 10);
	printf("\nN_caracters: %d \n", counter);
	return (0);
}
