# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: karpatel <karpatel@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 14:16:15 by karpatel          #+#    #+#              #
#    Updated: 2024/04/26 16:41:24 by karpatel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_print%X.c ft_printaddress_buf.c ft_printf.c ft_printhex.c ft_printint.c \
       ft_printunsigned.c ft_putchar_buf.c ft_putstr_buf.c \

OBJS = ${SRCS:.c=.o}
OBJSB = ${SRCSB:.c=.o}
NAME = libftprintf.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

LIBDIR	=	libft
LIBFT	=	$(LIBDIR)/libft.a

all: ${NAME}

${NAME}: ${LIBFT} $(OBJS)
	cp ${LIBFT} ${NAME}
	ar crs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -Ilibft -c $< -o $@

${LIBFT}:
	@make -C libft

clean:
	${RM} ${OBJS} ${OBJSB}
	make -C libft clean
	rm -f .bonus

fclean: clean
	make -C libft fclean
	${RM} ${NAME} ${bonus}

re: fclean all

.PHONY : all bonus clean fclean re
# $(NAME): $(LIBFT)
# 	cp $(LIBFT) $(NAME)

# $(LIBFT):
# 	@make -C libft

# %.o: %.c
# 	$(CC) $(CFLAGS) -Ilibft -c $< -o $@
