SRCS = ASpell.cpp BrickWall.cpp	Fireball.cpp Polymorph.cpp TargetGenerator.cpp	main.cpp ATarget.cpp Dummy.cpp Fwoosh.cpp SpellBook.cpp Warlock.cpp

NAME = exam

OBJS := $(SRCS:%.cpp=%.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re