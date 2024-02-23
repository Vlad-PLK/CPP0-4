NAME = polymorphism

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = ${subst .cpp,.o,${SRCS}}

FLAGS = -std=c++98 -Wall -Werror -Wextra

CXX = c++

all: ${NAME}

${NAME}: ${OBJS}
	@printf "\n"
	@printf "Creating your ${NAME} ! : \n"
	${CXX} ${FLAGS} -o ${NAME} ${OBJS}
	@printf "\n"

main.o:	main.cpp Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
	${CXX} ${FLAGS} -c main.cpp

Animal.o: Animal.hpp

WrongAnimal.o : WrongAnimal.hpp

WrongCat.o : WrongCat.hpp

Dog.o: Dog.hpp

Cat.o : Cat.hpp

clean :
	rm -rf ${OBJS}

fclean : clean
		rm -rf ${NAME}

re :	clean all

.PHONY: all clean re