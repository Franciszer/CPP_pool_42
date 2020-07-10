# ___COMPILATION___

CPP= c++
FLAGS= -Wall -Wextra -Werror
SRCS=	main.cpp\
		PhoneBook.class.cpp\
		Contact.class.cpp
NAME= phoneBook
OBJS= ${SRCS:.cpp=.o}
INCLUDE_DIRS = -I .


.cpp.o:
	@echo -n "${LIGHT_BLUE}=>	"
	${CPP} ${FLAGS} ${INCLUDE_DIRS} -c $< -o ${<:.cpp=.o}
	@echo -n "${NC}"

# ___COLORS___

GREEN=\033[0;32m
LIGHT_BLUE=\033[0;34m
RED=\033[0;31m
YELLOW=\033[0;33m
NC=\033[0m

all: ${NAME}

${NAME}: ${OBJS}
	@echo -n "${YELLOW}=>	"
	${CPP} ${FLAGS} ${INCLUDE_DIRS} ${OBJS} -o ${NAME}
	@echo "${GREEN}✓	${NAME} compiled${NC}"

start: all
	./${NAME}

clean:
	@echo -n "${RED}X	"
	rm -rf ${NAME}
	@echo -n "${RED}X	"
	rm -rf ${OBJS}
	@echo -n "${NC}"
	@echo "${GREEN}✓	${NAME} clean${NC}"

fclean: clean

re: fclean all

.PHONY: all clean fclean re start
