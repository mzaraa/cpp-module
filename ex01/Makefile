TARGET		= PhoneBook
SRCS		= main.cpp PhoneBook.cpp Contact.cpp
HEADERS		=
CC			= g++
CPP_FLAGS	=  -std=c++98
LD			:= $(CC)
OBJS		:= $(SRCS:%.cpp=%.o)
RM			:= rm -rf

all: $(TARGET)

$(TARGET): $(OBJS)
	@$(LD) $(OBJS) -o $(TARGET)
	@printf "LD $(TARGET)\n"

%.o: %.cpp $(HEADERS)
	@$(CC) -c $(CPP_FLAGS) $< -o $@
	@printf "CC $<\n"

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(TARGET)

re: fclean all

.PHONY: all clean fclean re