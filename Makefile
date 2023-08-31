CC = g++
CFLAGS = -Wall -Werror -Wextra -pedantic -Iinc
LDFLAGS = -lSDL2

# lSDL2_image

SRCDIR = src
OBJDIR = obj
BINDIR = bin

SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRC))
EXEC = $(BINDIR)/maze

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: clean
