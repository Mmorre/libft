# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: math <math@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/06 14:54:25 by math              #+#    #+#              #
#    Updated: 2021/04/19 17:55:41 by math             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc

FLAGS	= -Wall -Wextra -Werror -c

SRCS	= ft_strlen.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			
BONUS	= ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			
OBJS = $(SRCS:.c=.o)

OBJSBONUS = $(BONUS:.c=.o)


all: $(NAME)


$(NAME):	
	@$(CC) $(FLAGS) $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
			
		
bonus: $(NAME)
	@$(CC) $(FLAGS) $(BONUS)
	@ar rc $(NAME) $(OBJSBONUS)
	@ranlib $(NAME)
				

clean:
	@rm -f $(OBJS) $(OBJSBONUS)
				

fclean: clean
	@rm -f $(NAME)
				
				
re: fclean all


.PHONY:		all clean fclean re bonus 