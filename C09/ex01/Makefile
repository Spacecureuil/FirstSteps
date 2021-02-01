# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmaury <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/01 15:20:14 by pmaury            #+#    #+#              #
#    Updated: 2021/02/01 16:18:40 by pmaury           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_putchar.c ft_swap.c ft_strlen.c ft_strcmp.c ft_putstr.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

GCC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

${NAME}:	${OBJS}
			${GCC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
