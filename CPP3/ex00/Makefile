NAME = ClapTrap

SRCS = main.cpp ClapTrap.cpp

OBJS = ${subst .cpp,.o,$(SRCS)}

FLAGS = -std=c++98 -Wall -Werror -Wextra

CXX = c++

all: ${NAME}

${NAME}: ${OBJS}
	@printf "\n"
	@printf "Creating your ClapTrap ! : \n"
	${CXX} ${FLAGS} -o ${NAME} ${OBJS}
	@printf "\n"

main.o:	main.cpp ClapTrap.hpp
	${CXX} ${FLAGS} -c main.cpp

ClapTrap.o: ClapTrap.hpp

clean :
	rm -rf ${OBJS}

fclean : clean
		rm -rf ${NAME}

re :	clean all

.PHONY: all clean re