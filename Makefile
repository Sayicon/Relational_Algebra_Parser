NAME = CebirParser

CC = cc
CFLAGS = -Wall -Wextra -Werror

SOURCES = main.c parser_utils.c
OBJS = $(SOURCES:.c=.o)

LIBFT_PATH = libft/
LIBFT = $(LIBFT_PATH)libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	@echo ">> Derleniyor: libft"
	@$(MAKE) -C $(LIBFT_PATH)

$(NAME): $(OBJS) $(LIBFT)
	@echo ">> Derleniyor: $(NAME)"
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

clean:
	@rm -f $(OBJS)
	@$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all clean fclean re
