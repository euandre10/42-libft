# - Makefile Libft - #

# DIR SETTINGS
INC_DIR = include
SRC_DIR = source
OBJ_DIR = objects
LIB_DIR = lib

# FILE SETTINGS
NAME = $(LIB_DIR)/libft.a
EXEC_PROG = program
SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))

# COMPILER SETTINGS
CC = clang
CFLAGS = -I $(INC_DIR) -Wall -Wextra -Werror


# TARGETS
all: $(NAME) # General rule

main: $(NAME) # Compile a main file using libft.a
	$(CC) $(CFLAGS) main.c $(NAME) -o $(EXEC_PROG)

clean: # Clean object files
	rm -rf $(OBJ_DIR)

fclean: clean # Delete everything
	rm -rf $(NAME) $(EXEC_PROG) $(LIB_DIR)

re: fclean all # Recompiles from zero

.PHONY: all clean fclean re $(EXEC_PROG)


# PRE-REQUISITS
$(NAME): $(OBJECTS) | $(LIB_DIR) # Create LIBFT.a (static lib)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR) # Compile .c -> .o in its dir
	$(CC) $(CFLAGS) -c $< -o $@

$(LIB_DIR): # Create LIB folder if none
	mkdir -p $(LIB_DIR)

$(OBJ_DIR): # Create OBJ folder if none
	mkdir -p $(OBJ_DIR)