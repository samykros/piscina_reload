# Nombre de la biblioteca
NAME = libft.a

# Rutas de los directorios
SRC_DIR = srcs
INC_DIR = includes
OBJ_DIR = objs

# Fuentes y objetos
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))

# Compilador y opciones
CC = gcc
CFLAGS = -Wall -Wextra -Werror
IFLAGS = -I$(INC_DIR)

# Reglas
all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
