
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SRCS = ScavTrap.cpp ClapTrap.cpp main.cpp
NAME = scavtrap

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all