CFLAGS = -Wall -Wextra -Werror -g -I libft/include -I include

LDFLAGS = -L libft

LDLIBS = -l ft

MKDIR = mkdir -p
RMDIR = rm -rf

NAME = push_swap
NAME := $(addprefix bin/, $(NAME))

BIN_DIR = bin/
OBJ_DIR = obj/

MAIN_SRC = main.c
UTILS_SRC = stack_init.c stack_utils.c error_free.c sort.c
COMMANDS_SRC = swap.c

MAIN_OBJ = $(addprefix obj/, $(MAIN_SRC:%.c=%.o))
UTILS_OBJ = $(addprefix obj/, $(UTILS_SRC:%.c=%.o))
COMMANDS_OBJ = $(addprefix obj/, $(COMMANDS_SRC:%.c=%.o))

INCLUDE = include/push_swap.h

.PHONY : all libft clean fclean re

all : libft $(OBJ_DIR) $(BIN_DIR) $(NAME)

bin/push_swap: $(MAIN_OBJ) $(UTILS_OBJ) $(COMMANDS_OBJ)
	$(CC) $^ $(LDFLAGS) -o $@ $(LDLIBS)

obj/%.o : src/%.c src/commands%.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

libft :
	$(MAKE) -C libft

$(OBJ_DIR) :
	$(MKDIR) $@	

$(BIN_DIR) :
	$(MKDIR) $@

clean :
	$(MAKE) -C libft clean
	$(RMDIR) $(OBJ_DIR)

fclean :
	$(MAKE) -C libft fclean
	$(RMDIR) $(OBJ_DIR) $(BIN_DIR)

re : fclean all
