# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 15:34:42 by jinbekim          #+#    #+#              #
#    Updated: 2021/01/11 16:01:58 by jinbekim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
SRC = $(addsuffix .c, $(FUNC))
OBJ = $(SRC:.c=.o)
FUNC = ft_printf

all : $(NAME)

$(NAME) : libft $(OBJ)
	$(AR) $@ $?

libft :
	$(MAKE) -C $@

bonus : $(OBJB)
	$(AR) $(NAME) $?

re : fclean all

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

.PHONY : re clean fclean all bonus libft
