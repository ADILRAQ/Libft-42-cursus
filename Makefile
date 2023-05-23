# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 13:33:04 by araqioui          #+#    #+#              #
#    Updated: 2023/05/23 19:32:26 by araqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

MAN_SRCS = 	ft_isalpha ft_isdigit ft_isalnum \
			ft_isascii ft_isprint ft_strlen \
			ft_strlcpy ft_strlcat ft_toupper \
			ft_tolower ft_strchr ft_strrchr \
			ft_strncmp ft_strnstr ft_atoi \
			ft_memset ft_bzero ft_memcpy \
			ft_memmove ft_memchr ft_memcmp \
			ft_calloc ft_strdup ft_substr \
			ft_strjoin ft_itoa ft_strtrim \
			ft_split ft_strmapi ft_striteri \
			ft_putchar_fd ft_putstr_fd ft_putendl_fd \
			ft_putnbr_fd

BUS_SRCS = ft_lstnew ft_lstadd_front \
			ft_lstsize ft_lstlast \
			ft_lstadd_back ft_lstdelone \
			ft_lstclear ft_lstiter \
			ft_lstmap

MAN_OBJ = $(MAN_SRCS:=.o)
BUS_OBJ = $(BUS_SRCS:=.o)

all: $(NAME)

$(NAME): $(MAN_OBJ)
	@ $(AR) $(NAME) $(MAN_OBJ)

bonus: $(BUS_OBJ)
	@ $(AR) $(NAME) $(BUS_OBJ)

%.o: %.c libft.h
	$(CC) -c $(CFLAGS) $<

clean:
	$(RM) $(MAN_OBJ) $(BUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
