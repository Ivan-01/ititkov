# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ititkov <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/23 09:10:24 by ititkov           #+#    #+#              #
#    Updated: 2019/02/01 10:47:54 by ititkov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUT	= a.out
LIB = day11.a
GCCW = gcc -Wall -Werror -Wextra -g
MAIN = main.c
SRC = ft_list_print.c ft_create_elem.c ft_list_push_back.c ft_list_push_front.c \
	  ft_list_size.c  ft_list_last.c ft_list_push_params.c ft_list_clear.c \
	  ft_list_at.c ft_list_reverse.c
HEADER = .

OBJECT = $(SRC:.c=.o)

all: $(LIB)

$(LIB):
		$(GCCW) -I$(HEADER) -c $(SRC)
		ar rc $(LIB) $(OBJECT)
		ranlib $(LIB)

out: $(OUT)

$(OUT):
		$(GCCW)  -o $(OUT) $(MAIN) $(LIB) 

clean:
		@/bin/rm -f $(OBJECT)

fclean:	clean
		@/bin/rm -f $(LIB)
		@/bin/rm -f $(OUT)

re: fclean all out

