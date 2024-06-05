CC = c++
FLAGS =	-Wall -Wextra -Werror -std=c++98

NAME = My_Awesome_PhoneBook

SRCS =	Contact.cpp		\
		PhoneBook.cpp	\
		main.cpp

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
