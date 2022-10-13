# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rouarrak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 14:04:46 by rouarrak          #+#    #+#              #
#    Updated: 2022/10/07 21:48:07 by rouarrak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all:
	$(CC) $(CFLAGS) ft_strlen.c libft.h

exec:
	./a.out
clean:
	rm -rf a.out
	rm -rf *.o
	rm -rf *.gch
