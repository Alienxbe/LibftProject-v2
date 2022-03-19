# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mykman <mykman@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 19:34:14 by maykman           #+#    #+#              #
#    Updated: 2022/03/16 12:30:35 by mykman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILATION
CC		=	@gcc
CFLAGS	=	-Wall -Wextra -Werror

# COLORS
RED		:=	\033[38;5;9m
GREEN	:=	\033[38;5;10m
BLUE	:= 	\033[38;5;14m
YELLOW	:=	\033[38;5;226m
RESET	:=	\033[38;5;7m

# VARIABLES
FT		=	libft
NAME	=	${FT}.a

# FILES
# Type : `ls -l | grep ft_ | sed 's/.* //'` to get the name of every file
SRCS	=	ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strlen.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c
OBJS	:=	${SRCS:.c=.o}

# RULES
%.o:		%.c
	${CC} ${CFLAGS} -c -I.${INCLUDES} $< -o ${<:.c=.o}
	@echo "${BLUE}Compilation of $<...${RESET}"

$(NAME):	${OBJS}
	@ar -rcs $@ $^
	@echo "${PREFIX}${GREEN}Library created !${RESET}"

all:		${NAME}

clean:
	@rm -f ${OBJS}
	@echo "${YELLOW}Cleaning objects files...${RESET}"

fclean:
	@rm -f ${NAME} ${OBJS}
	@echo "${RED}Full clean...${RESET}"

re:			fclean all

.PHONY:		all clean fclean re