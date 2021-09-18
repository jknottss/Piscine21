NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
INCLUDES = includes/ft.h
OBJS = ${SRCS:.c=.o}
FLAGS = -Wall -Werror -Wextra
.c.o:
	gcc $(FLAGS) -c $< -I includes/ -o ${<:.c=.o}
$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
all: $(NAME)
clean: 
	rm -f ${OBJS}
fclean: clean 
	rm -f ${NAME}
re: fclean all
