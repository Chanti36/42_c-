CC = c++
FLAGS =	-Wall -Wextra -Werror -std=c++98

NAME = RPN

SRCS =	main.cpp \
		RPN.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)


%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@


clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re