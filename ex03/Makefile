
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -Wfatal-errors
SRCS = DiamondTrap.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp main.cpp
NAME = fragtrap

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all