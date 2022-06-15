NAME = Animal

CC = c++

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp

INC = Animal.hpp Dog.hpp Cat.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98 -I.

OBJS := ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
			$(CC) $(CFLAGS) -o $(NAME) $^

%.o: %.cpp
		$(CC) $(CFLAGS) -o $@ -c $<
clean :
		rm -rf ${OBJS}

fclean : clean
			rm -rf ${NAME}

re	:	fclean all

.PHONY : clean fclean re
