# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 15:34:42 by jinbekim          #+#    #+#              #
#    Updated: 2021/01/12 02:39:33 by jinbekim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRC = $(addsuffix .c, $(FUNC))
OBJ = $(SRC:.c=.o)
FUNC = ft_printf

all : $(NAME)

$(NAME) : libft $(OBJ)
	cp ./libft/libft.a $(NAME)
	$(AR) $@ $(OBJ)

libft :
	$(MAKE) -C $@

bonus : $(OBJB)
	$(AR) $(NAME) $?

re : fclean libft all

clean :
	$(MAKE) clean -C libft
	$(RM) $(OBJ)

fclean : clean
	$(MAKE) fclean -C libft
	$(RM) $(NAME)

.PHONY : re clean fclean all bonus libft
