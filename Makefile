NAME   = ft_ssl

SRC	 =  ft_ssl.c

SRCLIB = ./libft/

NAME2SRC = ./libft/libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror 

HEADER = ft_ssl.h

HEADERLIB = ./libft/libft.h

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	 @make -C $(SRCLIB)
	 @echo "\x1b[0;32mLibft OK\033[0m"
	 $(CC) $(OBJ) -L $(SRCLIB) -lft -I $(HEADER) -I $(HEADERLIB) -o $(NAME)
	 @echo "\x1b[36m$(NAME)\x1b[0;32m OK \033[0m"

%.o: %.c
	$(CC) -c $(FLAGS) -I $(HEADER) -I $(HEADERLIB) $< -o $@


clean:
	@echo "\x1b[0;32mClean \x1b[36m libft OBJS \033[1;0m\033[32m --->\033[0m"
	@make -C $(SRCLIB)/ clean
	@echo "\x1b[0;32mClean \x1b[36m ft_ls OBJ \x1b[0;32m --->\033[0m"
	rm -f $(OBJ)
	
	

fclean: clean
	@echo "\x1b[0;32mFClean \x1b[36m libft \x1b[0;32m --->\033[0m"
	@make -C $(SRCLIB)/ fclean
	@echo "\x1b[0;32mFClean \x1b[36m ft_ls \x1b[0;32m --->\033[0m"	
	rm -f $(NAME)
	
	

re: fclean all

.PHONY: re, all, clean, fclean