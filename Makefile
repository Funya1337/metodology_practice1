CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++17

SRCDIR = .
BUILDDIR = build
GAMES = games/LcmGame.cpp
HELPERS = helpers/LcmHelpers.cpp

SRCS = main.cpp $(GAMES) $(HELPERS)
OBJS = $(SRCS:.cpp=.o)

all: main

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clang:
	clang-format -i $(SRCS)

run_main:
	./main

clean:
	rm -rf *.o main games/*.o helpers/*.o
