# Makefile for merkle-tree project

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99 -pedantic
INCLUDES = -Iheaders

# Directories
SRCDIR = srcs
HEADERDIR = headers
OBJDIR = obj

# Files
SRCFILES = main.c
SOURCES = $(SRCFILES)
OBJECTS = $(SOURCES:%.c=$(OBJDIR)/%.o)
HEADERS = $(HEADERDIR)/types.h

# Target executable
NAME = merkle-tree

# Default target
all: $(NAME)

# Create object directory if it doesn't exist
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Rule to compile object files
$(OBJDIR)/%.o: %.c $(HEADERS) | $(OBJDIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Rule to create the executable
$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

# Clean object files
clean:
	rm -rf $(OBJDIR)

# Clean everything
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Run the program
run: $(NAME)
	./$(NAME)

# Debug build
debug: CFLAGS += -g -DDEBUG
debug: $(NAME)

# Phony targets
.PHONY: all clean fclean re run debug 