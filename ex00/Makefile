CC = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp  Fixed.cpp \

NAME = fixed

MY_OBJECTS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME) : $(MY_OBJECTS)
	@$(CC) $(CPP_FLAGS) $(MY_OBJECTS) -o $(NAME)

clean:
	@${RM} ${MY_OBJECTS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: fclean re clean all