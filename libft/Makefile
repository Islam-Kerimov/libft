# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctanton <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/04 18:20:37 by ctanton           #+#    #+#              #
#    Updated: 2020/12/10 18:12:32 by ctanton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

SRC =	ft_atoi.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memcpy.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memchr.c \
		ft_strncmp.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_split.c \

SRCBON =	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \

OBJ =	${SRC:.c=.o}

OBJBON  =	${SRCBON:.c=.o}

CC =	gcc

CFLAGS =	-Wall -Wextra -Werror -c

HEADER =	libft.h

%.o: %.c	$(HEADER)
	$(CC) $(CFLAGS) $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ) $(OBJBON)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:	$(OBJ) $(OBJBON)
	ar rc $(NAME) $(OBJ) $(OBJBON)

.PHONY: all clean fclean re
