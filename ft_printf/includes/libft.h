/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:30:02 by tiago_nevoa       #+#    #+#             */
/*   Updated: 2022/03/21 15:31:31 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int		ft_isprint(int c);
int		ft_putaddrs_fd(unsigned long n, int tag, int fd);
int		ft_putchar_fd(char c, int fd);
int		ft_puthex_fd(unsigned int n, int flag, int fd);
int		ft_putnbr_base(int nbr, char *base);
int		ft_putnbr_fd(int n, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putunsigned_fd(unsigned int n, int fd);
size_t	ft_strlen(const char *s);

#endif
