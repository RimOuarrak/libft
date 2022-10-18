# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rouarrak <rouarrak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 14:04:46 by rouarrak          #+#    #+#              #
#    Updated: 2022/10/18 02:37:40 by rouarrak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = 	ft_isdigit.c ft_putchar_fd.c ft_strlcpy.c ft_tolower.c \
		ft_atoi.c ft_isprint.c ft_putendl_fd.c ft_strlen.c ft_toupper.c \
		ft_bzero.c ft_memchr.c ft_putstr_fd.c ft_strncmp.c ft_split.c\
		ft_calloc.c ft_memcmp.c ft_strchr.c ft_strnstr.c ft_striteri.c\
		ft_isalnum.c ft_memcpy.c ft_strdup.c ft_strrchr.c ft_strtrim.c\
		ft_isalpha.c ft_memmove.c ft_strjoin.c ft_substr.c ft_strmapi.c\
		ft_isascii.c ft_memset.c ft_strlcat.c ft_putnbr_fd.c ft_itoa.c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}
	
${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re