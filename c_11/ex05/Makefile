SRC = do-op.c ft_atoi.c ft_func.c oper.c
NAME = do-op
FLAGS = -Wall -Werror -Wextra
$(NAME) : $(SRC)
	@gcc $(FLAGS) $(SRC) -o $(NAME)  
all: $(NAME)
clean: 
	@rm -f *.o
fclean: clean 
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean ft_display_name re
