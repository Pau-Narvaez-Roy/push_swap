NAME = push_swap

SOURCES = calcular_desorden.c\
          movimientos.c\
		  lst_function.c\

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME): $(OBJECTS)
	@echo "Compiling...."
	@$(AR) $(NAME) $(OBJECTS)

all: $(NAME)

clean: 
	@echo "Cleaning...."
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re