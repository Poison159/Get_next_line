# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaske <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/23 12:47:11 by tmaske            #+#    #+#              #
#    Updated: 2016/11/26 15:47:36 by tmaske           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_gnl
FILES = get_next_line.c
HEADER = get_next_line.h
OBJECTS = $(FILES:.c=.o)
HLOC = .
FLAGS = -Wall -Werror -Wextra -g -g3 -I$(HLOC)
LIB = libft/libft.a

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(FILES) gnlt.c $(HEADER)
	@gcc -o $(NAME) $(OBJECTS) gnlt.o $(LIB)
	@echo "$(NAME)	compiled"

lib:
	@make -C libft/ all

clean:
	@rm -f $(OBJECTS)
	@echo "$(NAME) cleaned"

fclean: clean 
	@make -C libft/ fclean
	@rm -f $(NAME)
	@echo "$(NAME) fcleaned"

re: fclean lib all

norm:
	@clear
	@norminette -R CheckForbiddenSourceHeader $(FILES) $(HEADER)
	@echo "Norme Check Completed"

qdeep:
	@clang $(FLAGS) -I libft/includes -o $(OBJECTS) -c $(FILES)
	@clang $(FLAGS) -I libft/includes -o gnlt.o -c gnlt.c
	@clang -o $(NAME) gnlt.o $(OBJECTS) -I libft/includes -L libft/ -lft

deep: 
	@make -C libft/
	@clang $(FLAGS) -I libft/includes -o $(OBJECTS) -c $(FILES)
	@clang $(FLAGS) -I libft/includes -o gnlt.o -c gnlt.c
	@clang -o $(NAME) gnlt.o $(OBJECTS) -I libft/includes -L libft/ -lft

four:
	@gcc $(FLAGS) -c $(FILES) gnlt42.c $(HEADER)
	@gcc -o $(NAME) $(OBJECTS) gnlt42.o $(LIB)
	@echo "$(NAME)  compiled"

main:
	@gcc $(FLAGS) -c $(FILES) main.c $(HEADER)
	@gcc -o $(NAME) $(OBJECTS) main.o $(LIB)
	@echo "GNL with main.c compiled"
