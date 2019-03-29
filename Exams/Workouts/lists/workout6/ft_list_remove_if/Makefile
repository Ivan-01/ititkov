# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ititkov <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/20 08:36:40 by ititkov           #+#    #+#              #
#    Updated: 2019/02/20 11:27:29 by ititkov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUT = a.out
LLDB = a.out.dSYM
LIB = ft_list_foreach.a
GCCW = gcc -Wall -Wextra -Werror -g
MAIN = main.c
SRC = ft_create_elem.c ft_push_params.c ft_print_list.c ft_list_size.c  \
	  ft_list_foreach.c ft_list_remove_if.c
	
HEADER = .

OBJECT = $(SRC:.c=.o)

all: $(LIB)

$(LIB):
		$(GCCW) -I$(HEADER) -c $(SRC)
		ar rc $(LIB) $(OBJECT)
		ranlib $(LIB)

out: $(OUT)

$(OUT):
		$(GCCW) -o $(OUT) $(MAIN) $(LIB)

clean:
		@/bin/rm -f $(OBJECT)

lclean:
		@/bin/rm -r $(LLDB)

fclean: clean
		@/bin/rm -f $(LIB)
		@/bin/rm -f $(OUT)

re: fclean all out


