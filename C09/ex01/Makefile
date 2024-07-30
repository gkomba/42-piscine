# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkomba <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 07:33:34 by gkomba            #+#    #+#              #
#    Updated: 2024/02/05 07:33:45 by gkomba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_DIR = ./srcs/

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRCS = $(addprefix $(SRCS_DIR), $(SRC))

SRCS_OBJ = ${SRCS:.c=.o}

HEADER_DIR = ./includes/

CC = cc

CFLAGS = -Wall -Wextra -Werror

OUTPUT = libft.a

.c.o:
	${CC} ${CFLAGS} -I ${HEADER_DIR} -c $< -o ${<:.c=.o}

${OUTPUT} : ${SRCS_OBJ}
	ar rc $(OUTPUT) $(SRCS_OBJ)

all : ${OUTPUT}

clean :
	rm -f ${SRCS_OBJ}

fclean : clean
	rm -f ${OUTPUT}

re : fclean all

.PHONY : all clean fclean re
