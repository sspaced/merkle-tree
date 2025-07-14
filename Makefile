# Makefile for merkle-tree project

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99 -pedantic
INCLUDES = -Iheaders -I/opt/homebrew/opt/openssl@3/include
LDFLAGS = -L/opt/homebrew/opt/openssl@3/lib -lssl -lcrypto

# Directories
SRCDIR = srcs
HEADERDIR = headers
OBJDIR = obj

# Files
SRCFILES = main.c $(wildcard $(SRCDIR)/*.c)
SOURCES = $(SRCFILES)
OBJECTS = $(SOURCES:%.c=$(OBJDIR)/%.o)
HEADERS = $(wildcard $(HEADERDIR)/*.h)

# Target executable
NAME = merkle-tree

# Default target
all: $(NAME)

# Create object directory if it doesn't exist
$(OBJDIR):
	mkdir -p $(OBJDIR)
	mkdir -p $(OBJDIR)/$(SRCDIR)

# Rule to compile object files
$(OBJDIR)/%.o: %.c $(HEADERS) | $(OBJDIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Rule to create the executable
$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) $(LDFLAGS)

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
