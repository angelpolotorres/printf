# ------------------------------ FILES AND DIRS ------------------------------ #
NAME = libftprintf.a

SRC_DIR = .
SRC_FILES = $(addprefix $(SRC_DIR)/, $(SRC))
SRC =	ft_printf.c \
		ft_print_char.c \
		ft_print_str.c \
		ft_print_nbr.c \
		ft_print_nbr_unsgnd.c \
		ft_print_nbr_hex.c \
		ft_print_ptr.c \

OBJ_DIR = .
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

INC_FILES = ft_printf.h

# ---------------------------- COMPILERS AND FLAGS --------------------------- #

CC = gcc -g
CFLAGS = -Wall -Wextra -Werror
GENERATE_LIB = ar rcs

# -------------------------- MAKEFILE INSTRUCTIONS --------------------------- #

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJ_FILES) $(INC_FILES)
	$(GENERATE_LIB) $(NAME) $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -fr $(SRC_DIR)/*.o *.d

fclean : clean
	rm -f $(NAME)

re: fclean all
