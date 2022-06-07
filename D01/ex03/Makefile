NAME = Violence

CC = c++

SRCS = main.cpp weapon/Weapon.cpp humanA/HumanA.cpp humanB/HumanB.cpp

INC = weapon/Weapon.hpp humanA/HumanA.hpp humanB/HumanB.hpp

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
