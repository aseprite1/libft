# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 14:18:30 by geonlee           #+#    #+#              #
#    Updated: 2022/09/14 13:28:58 by geonlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_atoi.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

BSRCS =	ft_lstadd_back.c\
		ft_lstadd_front.c\
		ft_lstclear.c\
		ft_lstdelone.c\
		ft_lstlast.c\
		ft_lstnew.c\
		ft_lstsize.c\
		ft_lstiter.c\
		ft_lstmap.c

BONUS = 0

FLAGS	= -Wall -Werror -Wextra

ifeq ($(BONUS),1)
	SRCS += $(BSRCS)
endif

OBJS	= $(SRCS:%.c=%.o)

BOBJS	= $(BSRCS:%.c=%.o)

all: $(NAME)

bonus : 
	make BONUS=1 $(NAME)

%.o : %.c
	cc $(FLAGS) -c $^

$(NAME): $(OBJS) 
	ar rc $@ $^

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: 
	make fclean
	make all

.PHONY: all bonus clean fclean re