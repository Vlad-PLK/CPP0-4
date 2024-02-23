NAME = replace

SRC = main.cpp NewFile.cpp

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

main.o:	main.cpp NewFile.hpp
	${CXX} ${CPP_V} ${FLAGS} -c main.cpp

NewFile.o : NewFile.hpp

clean :
	rm -rf ${OBJ}

fclean : clean
		rm -rf ${NAME}

re :	clean all

.PHONY: all clean re
