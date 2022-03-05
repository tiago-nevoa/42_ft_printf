/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago_nevoa <tiago_nevoa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:29:18 by tiago_nevoa       #+#    #+#             */
/*   Updated: 2022/03/05 18:00:46 by tiago_nevoa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// gcc main.c ft_printf.c ft_flag_select.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c

int	main(void)
{
	int	counter;

	counter = 0;
	counter = ft_printf("ABC 123 %d  %c fdsfds %u ] %s [ :\' -/*", 8, 'h', 12, "ccm_always");
	printf("\nN_caracters: %d \n", counter);
	counter = printf("ABC 123 %d  %c fdsfds %u ] %s [ :\' -/*", 5, 'h', 6, "ccm_always");
	printf("\nN_caracters: %d \n", counter);
	printf("%p\n", &counter);
	return (0);
}