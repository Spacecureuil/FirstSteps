# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmaury <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/01 15:20:14 by pmaury            #+#    #+#              #
#    Updated: 2021/02/03 15:44:38 by pmaury           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_putchar.c ft_swap.c ft_strlen.c ft_strcmp.c ft_putstr.c

OBJS	= ${SRCS:.c=.o}

CFLAGS	= -Wall -Werror -Wextra

${NAME}:	gcc -Wall -Werror -Wextra -c ${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

RM:			rm -f

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
