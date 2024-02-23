NAME = ROBOTS

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS = ${subst .cpp,.o,$(SRCS)}

FLAGS = -std=c++98 -Wall -Werror -Wextra

CXX = c++

all: ${NAME}

${NAME}: ${OBJS}
	@printf "\n"
	@printf "Creating your ClapTrap ! : \n"
	${CXX} ${FLAGS} -o ${NAME} ${OBJS}
	@printf "\n"

main.o:	main.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	${CXX} ${FLAGS} -c main.cpp

ClapTrap.o: ClapTrap.hpp

ScavTrap.o : ScavTrap.hpp

FragTrap.o : FragTrap.hpp

clean :
	rm -rf ${OBJS}

fclean : clean
		rm -rf ${NAME}

re :	clean all

.PHONY: all clean re
