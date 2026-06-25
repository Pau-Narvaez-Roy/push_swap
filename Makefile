# todo: hacer que haga make en la carpeta de la libft y ft_printf y que la mueva a la raiz. Poner su nombre en .PHONY

NAME = push_swap

SOURCES =	srcs/ft_entropy.c			\
         	srcs/ft_moves.c				\
			srcs/ft_algo_simple.c		\
		 	srcs/lst_function.c			\
			srcs/ft_standardization.c	\
			main.c

OBJECTS = $(SOURCES:.c=.o)

LIBS = 	libft.a		\
		ft_printf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBS)
	@echo "Compiling...."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) $(LIBS)

$(LIBS):
	cd srcs/libft && make && make clean && mv libft.a ../../ && cd ../ && cd ft_printf && make && make clean && mv ft_printf.a ../../ && cd ../../
	
clean: 
	@echo "Cleaning...."
	@$(RM) $(OBJECTS) $(LIBS)

fclean: clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
