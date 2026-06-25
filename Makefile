# todo: hacer que haga make en la carpeta de la libftprintf y que la mueva a la raiz. Poner su nombre en .PHONY

NAME = push_swap

SOURCES =	srcs/ft_entropy.c		\
         	srcs/ft_moves.c			\
			srcs/ft_check_error.c	\
			srcs/ft_algo_simple.c	\
		 	srcs/lst_function.c		\

OBJECTS = $(SOURCES:.c=.o)

LIBFT = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "Compiling...."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

$(OBJECTS): $(SOURCES) libft
	$(CC) $(CFLAGS) -c -o $(OBJECTS) $(SOURCES) srcs/libft.a

libft:
	cd libft
	make && make clean
	mv $(LIBFT) ..
	cd ..

clean: 
	@echo "Cleaning...."
	@$(RM) $(OBJECTS) $(LIBFT_OBJECTS)

fclean: clean
	@$(RM) $(NAME) $(LIBFT)

re:	fclean all

.PHONY: all clean fclean re libft
