# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmaury <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 14:13:26 by pmaury            #+#    #+#              #
#    Updated: 2021/03/23 14:13:30 by pmaury           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_atoi.c srcs/ft_isalnum.c srcs/ft_isalpha.c srcs/ft_strlen.c \
	   srcs/ft_isascii.c srcs/ft_isdigit.c srcs/ft_isprint.c srcs/ft_tolower \
	   srcs/ft_toupper.c srcs/ft_putchar_fd.c srcs/ft_putstr_fd.c \
	   srcs/ft_putendl_fd.c srcs/ft_putnbr_fd.c srcs/ft_strjoin.c

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all