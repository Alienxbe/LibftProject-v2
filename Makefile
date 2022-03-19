# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mykman <mykman@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 19:34:14 by maykman           #+#    #+#              #
#    Updated: 2022/03/19 19:45:15 by mykman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILATION
CC			=	@gcc
CFLAGS		=	-Wall -Wextra -Werror

# COLORS
RED			:=	\033[38;5;9m
GREEN		:=	\033[38;5;10m
BLUE		:= 	\033[38;5;14m
YELLOW		:=	\033[38;5;226m
RESET		:=	\033[38;5;7m

# VARIABLES
FT			=	libft
NAME		=	${FT}.a

# FILES
# Type : `ls -l | grep ft_ | sed 's/.* //'` to get the name of every file
SRCS		=	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c
SRCS_BONUS	=	ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c
OBJS		:=	${SRCS:.c=.o}
OBJS_BONUS	:=	${SRCS_BONUS:.c=.o}

# RULES
%.o:		%.c
	${CC} ${CFLAGS} -c -I.${INCLUDES} $< -o ${<:.c=.o}
	@echo "${BLUE}Compilation of $<...${RESET}"

$(NAME):	${OBJS}
	@ar -rcs $@ $^
	@echo "${PREFIX}${GREEN}Library created !${RESET}"

all:		${NAME}

bonus:		${OBJS_BONUS}
	@ar -rcs ${NAME} $^
	@echo "${PREFIX}${YELLOW}Bonus functions added !${RESET}"

clean:
	@rm -f ${OBJS}
	@echo "${YELLOW}Cleaning objects files...${RESET}"

bclean:
	@rm -f ${OBJS_BONUS}
	@echo "${YELLOW}Cleaning bonus objects files...${RESET}"

fclean:
	@rm -f ${NAME} ${OBJS} ${OBJS_BONUS}
	@echo "${RED}Full clean...${RESET}"

re:			fclean all

.PHONY:		all clean fclean re