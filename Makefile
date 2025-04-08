CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++17

SRCDIR = .
BUILDDIR = build

GAMES = games/LcmGame.cpp games/GeometryProgression.cpp
HELPERS = helpers/LcmHelpers.cpp
SRCS = Main.cpp $(GAMES) $(HELPERS)

OBJS = $(patsubst %.cpp,$(BUILDDIR)/%.o,$(SRCS))

all: clang main

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main

$(BUILDDIR)/Main.o: Main.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILDDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clang:
	clang-format -i $(SRCS)

run_main:
	./main

clean:
	rm -rf main $(BUILDDIR)
