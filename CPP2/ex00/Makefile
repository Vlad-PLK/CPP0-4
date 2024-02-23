NAME = float

SRCS = main.cpp Fixed.cpp

OBJS = ${subst .cpp,.o,$(SRCS)}

CXX = c++

FLAGS = -Wall -Werror -Wextra

CPPV = -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
	@printf "\n"
	@printf "Creating your float ! : \n"
	${CXX} ${CPP_V} ${FLAGS} -o ${NAME} ${OBJS}
	@printf "\n"

main.o:	main.cpp Fixed.hpp
	${CXX} ${CPP_V} ${FLAGS} -c main.cpp

Fixed.o: Fixed.hpp

clean :
	rm -rf ${OBJS}

fclean : clean
		rm -rf ${NAME}

re :	clean all

.PHONY: all clean re