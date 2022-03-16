/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:29:18 by tiago_nevoa       #+#    #+#             */
/*   Updated: 2022/03/16 20:19:07 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	main(void)
{
	int	counter;
	int	p;

	p = 256;
	counter = 0;
	counter = ft_printf("ABC 123 %d  %c fdsfds %u ] %s [ :\' -/* lowhex: %x upperhex: %X pointer:%p", 8, 'h', 12578, "ccm_always", 27, +27, &p);
	printf("\nN_caracters: %d \n", counter);
	counter = printf("ABC 123 %d  %c fdsfds %u ] %s [ :\' -/* lowhex: %x upperhex: %X pointer:%p", 8, 'h', 12578, "ccm_always", 27, +27, &p);
	printf("\nN_caracters: %d \n", counter);
	printf("%p\n", &p);
	return (0);
}
