# ___COMPILATION___

CPP= c++
FLAGS= -Wall -Wextra -Werror
SRCS= main.cpp PhoneBook.class.cpp
NAME= phoneBook
OBJS= ${SRCS:.cpp=.o}
INCLUDE_DIRS = -I .

# ___COLORS___

GREEN=\033[0;32m
LIGHT_BLUE=\033[0;34m
YELLOW=\033[0;33m
NC=\033[0m

all: ${NAME}

${NAME}:
	@echo -n "${YELLOW}=>	"
	${CPP} ${FLAGS} ${INCLUDE_DIRS} ${SRCS} -o ${NAME}
	@echo "${GREEN}✓	${NAME} compiled${NC}"

clean:
	@rm -rf ${NAME}
	@echo "${GREEN}✓	${NAME} clean${NC}"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
Makefile
make_cpp