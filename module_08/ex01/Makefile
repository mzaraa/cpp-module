TARGET		= prog
SRCS		= main.cpp Span.cpp
HEADERS		=
CC			= g++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98 -ferror-limit=100
LD			= $(CC)
OBJS		= $(SRCS:%.cpp=%.o)
RM			= rm -rf

all: $(TARGET)

$(TARGET): $(OBJS)
	@$(LD) $(OBJS) -o $(TARGET)
	@printf "$(TARGET)\n"

%.o: %.cpp $(HEADERS)
	@$(CC) -c $(CPP_FLAGS) $< -o $@
	@printf "$<\n"

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(TARGET)

re: fclean all

.PHONY: all clean fclean re