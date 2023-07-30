# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hehuang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 23:36:18 by hehuang           #+#    #+#              #
#    Updated: 2023/07/27 21:45:28 by hehuang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c

OBJS = ${SRCS:.c=.o}

NAME = do-op

CFLAGS = -Wall -Wextra -Werror

.c.o:
		gcc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		gcc ${CFLAGS} $^ -o $@

all:	${NAME}
		
clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all
