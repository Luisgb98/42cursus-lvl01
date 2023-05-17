# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lguisado <lguisado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 11:49:45 by lguisado          #+#    #+#              #
#    Updated: 2022/10/10 19:19:26 by lguisado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Werror -Wall -Wextra
RM			= rm -f
SRCS		=	ft_printf.c \
				ft_conts.c \
				ft_printhex.c \
				ft_prints.c
OBJS		=	${SRCS:.c=.o}
OBJS_BONUS	=	${SRCS_BONUS:.c=.o}
AR			=	ar rcs
LIB			=	ranlib

all		:	${NAME}

.c.o	:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I.

${NAME}	:	${OBJS}
		${AR} ${NAME} ${OBJS}
		${LIB} ${NAME}

clean	:
		${RM} ${OBJS} ${OBJS_BONUS}
	
fclean	:	clean
		${RM} ${NAME}

re:	fclean ${NAME}

.PHONY: all clean fclean re