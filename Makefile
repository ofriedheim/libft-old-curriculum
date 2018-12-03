# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olifried <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/06 15:02:35 by olifried          #+#    #+#              #
#    Updated: 2018/10/06 15:02:37 by olifried         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJDIR = ./obj/
LSTDIR = ./list/
SRCDIR = ./src/

SRC_BASE =	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strcat.c ft_strchr.c ft_strcmp.c \
		ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c \
		ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnstr.c \
		ft_strrchr.c ft_strstr.c ft_tolower.c ft_toupper.c 

SRC_ADD	=	ft_itoa.c ft_memalloc.c ft_memdel.c ft_putchar.c \
			ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
			ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
			ft_strclr.c ft_strdel.c ft_strequ.c ft_striter.c \
			ft_striteri.c ft_strjoin.c ft_strmap.c ft_strmapi.c \
			ft_strnequ.c ft_strnew.c ft_strsplit.c ft_strsub.c ft_strtrim.c \

SRC_BON =	ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstnew.c \
			ft_lstiter.c #ft_lstmap.c ft_lstnew.c

SRC_EXTRA = ft_list_push_back.c ft_list_size.c ft_list_addone.c

OBJ = $(addprefix $(OBJDIR),$(SRC_BASE:.c=.o))
OBJ += $(addprefix $(OBJDIR),$(SRC_ADD:.c=.o))
OBJ += $(addprefix $(OBJDIR),$(SRC_BON:.c=.o))
OBJ += $(addprefix $(OBJDIR),$(SRC_EXTRA:.c=.o))

HEAD = libft.h

.PHONY: all re clean fclean

all: obj $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o: $(SRCDIR)%.c
	@gcc -Wall -Werror -Wextra -I. -c $< -o $@

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)
	echo "Running clean command..."

fclean: clean
	@rm -f $(NAME)
	echo "Running fclean command..."

re: fclean all
	echo "Running re command..."