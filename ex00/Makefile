NAME	= convert
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS 	=	src/main.cpp src/ScalarConverter.cpp \
			src/convertType.cpp src/displayType.cpp \
			src/detectType.cpp

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
