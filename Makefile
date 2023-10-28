# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: framador <framador@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 14:47:08 by framador          #+#    #+#              #
#    Updated: 2023/10/20 15:00:20 by framador         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra 
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_strnstr.c ft_atoi.c ft_memcmp.c ft_substr.c ft_strdup.c ft_strjoin.c ft_calloc.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putstr_fd.c ft_putendl_fd.c ft_putchar_fd.c ft_putnbr_fd.c ft_split.c
OBJ = $(SRC:.c=.o)
SRCBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJBONUS = $(SRCBONUS:.c=.o)
PROGRAM = main.c

all: $(NAME) $(OBJ)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ) $(OBJBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all


bonus: $(BONUS) $(OBJBONUS)
	ar -crs $(NAME) $(OBJBONUS)
	@touch bonus

.PHONY: all clean fclean re 
