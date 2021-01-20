# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 15:34:42 by jinbekim          #+#    #+#              #
#    Updated: 2021/01/20 23:41:51 by jinbekim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRC = $(addsuffix .c, $(FUNC))
OBJ = $(SRC:.c=.o)
FUNC = ft_printf ft_handler ft_flag_setter c_handler d_handler persent_handler u_handler x_handler p_handler

all : $(NAME)

$(NAME) : $(OBJ)
	$(MAKE) -C libft
	cp ./libft/libft.a ./libftprintf.a
	$(AR) $@ $?

libft :
	$(MAKE) -C libft

bonus : $(OBJB) $(LIBFT)
	$(AR) $(NAME) $?

re : fclean all

clean :
	$(MAKE) clean -C libft
	$(RM) $(OBJ)

fclean : clean
	$(MAKE) fclean -C libft
	$(RM) $(NAME)

.PHONY : re clean fclean all bonus libft
