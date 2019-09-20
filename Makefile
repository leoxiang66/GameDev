OBJS = main.cpp
OBJ_NAME = game

# CC specifies the compiler we're using
CC = g++
# -w suppresses all warnings
COMPILER_FLAGS = -w

# LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2

all: $(OBJ_Name)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
