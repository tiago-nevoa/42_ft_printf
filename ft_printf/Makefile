# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/05 15:13:43 by tiago_nevoa       #+#    #+#              #
#    Updated: 2022/03/21 15:33:59 by tferreir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ------------  PROJECT  ----------------------------------------------------- #
NAME	=		libftprintf.a

# ------------  DIRECTORIES  ------------------------------------------------- #
SRC_DIR	=		srcs
HDR_DIR	=		includes
OBJ_DIR	=		objs
LIBFT_DIR =		libft
FT_PRINTF_DIR =	ft_printf

# ------------  SOURCE FILES  ------------------------------------------------ #

SRC_FLS	=		$(LIBFT_FLS)\
				$(FT_PRINTF_FLS)\

LIBFT_FLS = 	$(LIBFT_DIR)/ft_isprint.c \
				$(LIBFT_DIR)/ft_putaddrs_fd.c \
				$(LIBFT_DIR)/ft_putchar_fd.c \
				$(LIBFT_DIR)/ft_putnbr_base.c \
				$(LIBFT_DIR)/ft_putnbr_fd.c \
				$(LIBFT_DIR)/ft_putstr_fd.c \
				$(LIBFT_DIR)/ft_strlen.c \
				$(LIBFT_DIR)/ft_putunsigned_fd.c \
				$(LIBFT_DIR)/ft_puthex_fd.c


FT_PRINTF_FLS = $(FT_PRINTF_DIR)/ft_flag_select.c \
				$(FT_PRINTF_DIR)/ft_printf.c \
				$(FT_PRINTF_DIR)/main.c \

# ------------  FILEPATHS  --------------------------------------------------- #
SRCS	=		$(addprefix $(SRC_DIR)/, $(SRC_FLS))
OBJS	=		$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o, $(SRCS))
DEPS	=		$(OBJS:.o=.d)

# ------------  FLAGS  ------------------------------------------------------- #
CC		=		gcc
RM		=		rm -rf
CFLGS	=		-Wall -Werror -Wextra
IFLGS	=		-I $(HDR_DIR)
DFLGS	=		-MMD -MP -O1

# ------------  RULES  ------------------------------------------------------- #
.PHONY: all clean fclean re

all: $(NAME)

-include $(DEPS)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLGS) $(DFLGS) -c -o $@ $< $(IFLGS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/$(LIBFT_DIR)
	mkdir -p $(OBJ_DIR)/$(FT_PRINTF_DIR)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
