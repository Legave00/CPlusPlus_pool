NAME = Identify
SRCS = $(wildcard *.cpp)
HEADER = $(wildcard *.hpp)

OBJS = $(SRCS:.cpp=.o)
CC = clang++ -std=c++98
RM = rm -rf
CFLAGS = -Werror -Wextra -Wall
all:	$(NAME)
%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)
$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
clean:		
		$(RM) $(OBJS)
fclean:		clean
		$(RM) $(NAME)
re:		fclean all