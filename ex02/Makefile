
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SRCS = FragTrap.cpp ClapTrap.cpp main.cpp
NAME = fragtrap

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all