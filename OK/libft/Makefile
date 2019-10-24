
NAME= libft.a
CC = gcc
CFLAGS= -Wall -Werror -Wextra
SRC= *.c libft.h
OBJ= *.o
all: $(NAME)
$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
$(OBJ): $(SRC)
	@$(CC) -c $(CFLAGS) $(SRC)
# The cleaner
clean :
	@rm -rf $(OBJ)
fclean : clean
	@rm -rf $(NAME)
re:	fclean all
