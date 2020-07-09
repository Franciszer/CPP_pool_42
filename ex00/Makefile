# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: franciszer <franciszer@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/09 22:29:03 by franciszer        #+#    #+#              #
#    Updated: 2020/07/09 22:29:16 by franciszer       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ___COMPILATION___

CPP=c++
FLAGS=-Wall -Wextra -Werror
SRCS= megaphone.cpp
NAME=megaphone

# ___COLORS___

GREEN=\033[0;32m
LIGHT_BLUE=\033[0;34m
YELLOW=\033[0;33m
NC=\033[0m

all: ${NAME}

${NAME}:
	@echo -n "${YELLOW}=>	"
	${CPP} ${FLAGS} ${SRCS} -o ${NAME}
	@echo "${GREEN}✓	${NAME} compiled${NC}"

clean:
	@rm -rf ${NAME}
	@echo "${GREEN}✓	${NAME} clean${NC}"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
