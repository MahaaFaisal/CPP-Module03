
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SRCS = ClapTrap.cpp main.cpp
NAME = claptrap

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all