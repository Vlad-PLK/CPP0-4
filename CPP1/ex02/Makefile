NAME = exec

SRC = main.cpp

OBJ = ${subst .cpp,.o,$(SRC)}

CXX = c++

FLAGS = -Wall -Werror -Wextra

CPP_V = -std=c++98

all: ${NAME}

${NAME}: ${OBJ}
	@printf "\n"
	@printf "Creating your executable file ! : \n"
	${CXX} ${CPP_V} ${FLAGS} -o ${NAME} ${OBJ}
	@printf "\n"

main.o:	main.cpp
	${CXX} ${CPP_V} ${FLAGS} -c main.cpp
clean :
	rm -rf ${OBJ}

fclean : clean
		rm -rf ${NAME}

re :	clean all

.PHONY: all clean re
