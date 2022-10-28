# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 07:03:51 by ahamrad           #+#    #+#              #
#    Updated: 2022/10/28 01:04:29 by ahamrad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
CFLAGS := -Wall -Wextra -Werror
SRC  := ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_strlcat.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_strncmp.c\
		ft_strdup.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_strrchr.c\
		ft_calloc.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c\
		ft_substr.c \
		ft_strjoin.c \
		ft_putnbr_fd.c \
		ft_strtrim.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strnstr.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_split.c

BONUS := ft_lstnew.c\
		 ft_lstadd_front.c \
		 ft_lstsize.c \
		 ft_lstlast.c \
		 ft_lstadd_back.c \
		 
		
		 
OBJ :=  $(SRC:.c=.o)
NAME := libft.a

all: $(NAME)
$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
clean : 
	rm -rf *.o
fclean : clean
	rm -rf $(NAME)
re: fclean all



