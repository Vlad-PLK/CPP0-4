NAME = war

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = ${subst .cpp,.o,$(SRC)}

CXX = c++

FLAGS = -Wall -Werror -Wextra

CPP_V = -std=c++98

all: ${NAME}

${NAME}: ${OBJ}
	@printf "\n"
	@printf "Creating your war ! : \n"
	${CXX} ${CPP_V} ${FLAGS} -o ${NAME} ${OBJ}
	@printf "\n"

main.o:	main.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	${CXX} ${CPP_V} ${FLAGS} -c main.cpp

Weapon.o: Weapon.hpp

HumanA.o: HumanA.hpp

HumanB.o: HumanB.hpp

clean :
	rm -rf ${OBJ}

fclean : clean
		rm -rf ${NAME}

re :	clean all

.PHONY: all clean re
