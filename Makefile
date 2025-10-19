# Sources and objects
SRC 	= $(wildcard src/str/*.c)

OBJ     = $(SRC:.c=.o)

# Compiler and flags
FLAGS  	= -Wall -Wextra -Werror -Iinclude -fdiagnostics-color=always

# Output binary name
NAME	= main

# Colors
RED     = \033[0;31m
YELLOW  = \033[0;33m
PURPLE  = \033[0;35m
GRAY1  	= \033[0;37m
GRAY2   = \033[0;90m

# Compilation rule
$(NAME): $(OBJ)
	@gcc $(OBJ) -o $(NAME) $(FLAGS)
	@echo "$(PURPLE)[SUCCESS] :\\n  $(GRAY1)|-> Compilation completed!"

# Default rule
all: $(NAME)

# Compilation of object files
%.o: %.c
	@echo "$(YELLOW)[COMPILED]:\n\
	  $(GRAY1)|-> [file.c] $(GRAY2)$<\n\
	  $(GRAY1)|-> [file.o] $(GRAY2)$@"
	@gcc -c $< -o $@ $(FLAGS)

# Cleanup rules
clean:
		@rm -f $(OBJ)
		@echo "$(RED)[CLEANED] :\\n  $(GRAY1)|-> Object files removed!"

fclean: clean
		@rm -f $(NAME)
		@echo "$(RED)[FCLEANED] :\\n  $(GRAY1)|-> Executable removed!"

# Full rebuild
re: fclean all
