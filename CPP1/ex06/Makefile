NAME = HarlFilter

SRC = main.cpp Harl.cpp

OBJ = ${subst .cpp,.o,$(SRC)}

CXX = c++

FLAGS = -Wall -Werror -Wextra

CPP_V = -std=c++98

all: ${NAME}

${NAME}: ${OBJ}
	@printf "\n"
	@printf "Creating your Harl Filter ! : \n"
	${CXX} ${CPP_V} ${FLAGS} -o ${NAME} ${OBJ}
	@printf "\n"

main.o:	main.cpp Harl.hpp
	${CXX} ${CPP_V} ${FLAGS} -c main.cpp

Harl.o: Harl.hpp

clean :
	rm -rf ${OBJ}

fclean : clean
		rm -rf ${NAME}

re :	clean all

.PHONY: all clean re
