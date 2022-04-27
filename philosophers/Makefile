# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdanyell <rdanyell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 12:33:05 by rdanyell          #+#    #+#              #
#    Updated: 2022/04/06 14:40:53 by rdanyell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_PH		=  philosophers

NAME_PHB	= philosophers_bonus

INCLUDES_PH	= includes/

HEADER_PH	= includes/philosophers.h

HEADER_PHB	= includes/philosophers_bonus.h

DIR_PH		= srcs/

DIR_PHB		= bonus/

FILES_PH	= main.c 	

FILES_PHB	= main_bonus.c 

SRCS_PH		= $(addprefix $(DIR_PH), $(FILES_PH))

SRCS_PHB	= $(addprefix $(DIR_PHB), $(FILES_PHB))

OBJS_PH		= $(SRCS_PH:%.c=%.o)

OBJS_PHB	= $(SRCS_PHB:%.c=%.o)

CC 			= cc

CFLAGS		= -Wall -Wextra -Werror 

LIBS		= -lpthread

.PHONY: 	all clean fclean re bonus

all:		$(NAME_PH)

bonus:
			@make NAME_PH="$(NAME_PHB)" \
			OBJS_PH="$(OBJS_PHB)" \
			HEADER_PH="$(HEADER_PHB)" all

$(NAME_PH):	$(OBJS_PH)
			$(CC) $(CFLAGS) ${LIBS} $(OBJS_PH)-o $@

%.o:		%.c $(HEADER_PH) 
			$(CC) $(CFLAGS) -I $(INCLUDES_PH) -I -c $< -o $@

clean	:
			$(RM) $(OBJS_PH) $(OBJS_PHB)
							
fclean	:	clean
			rm -r $(NAME_PH) $(NAME_PHB)

re		:	fclean all
	
