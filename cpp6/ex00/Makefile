# **************************************************************************** #
#																			  #
#														 :::	  ::::::::	#
#	Makefile										   :+:	  :+:	:+:	#
#													 +:+ +:+		 +:+	  #
#	By: ydorene <ydorene@student.42.fr>			+#+  +:+	   +#+		 #
#												 +#+#+#+#+#+   +#+			#
#	Created: 2021/11/11 15:00:18 by ydorene		   #+#	#+#			  #
#	Updated: 2021/11/11 15:38:49 by ydorene		  ###   ########.fr		#
#																			  #
# **************************************************************************** #

NAME = Convert
SRCS = $(wildcard *.cpp)
HEADER = $(wildcard *.hpp)

OBJS = $(SRCS:.cpp=.o)
CC = clang++ -std=c++98
RM = rm -rf
CFLAGS = -g -Werror -Wextra -Wall
all:	$(NAME)
%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)
$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
clean:		
		$(RM) $(OBJS)
fclean:		clean
		$(RM) $(NAME)

# run:
# 	./$(NAME) a
# 	./$(NAME) 6

re:		fclean all