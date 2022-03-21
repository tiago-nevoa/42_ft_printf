/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:29:18 by tiago_nevoa       #+#    #+#             */
/*   Updated: 2022/03/21 15:30:14 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

// gcc **/*.c

int	main(void)
{
	int		counter;
	void	*p;

	p = NULL;
	counter = 0;
	counter = ft_printf("pointer:%p", p);
	printf("\nN_caracters: %d \n", counter);
	counter = printf("pointer:%p", p);
	printf("\nN_caracters: %d \n", counter);
	return (0);
}
