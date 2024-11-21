# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Source and object files
SRC = vector.cpp
OBJ = $(SRC:.cpp=.o)

# Output executable
TARGET = vector_program

# Default target to build the executable
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to build the object file from source
$(OBJ): vector.h $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC)

# Clean up object files and executable
clean:
	rm -f $(OBJ) $(TARGET)

# Rule to run the program
run: $(TARGET)
	./$(TARGET)

# Phony targets (not actual files)
.PHONY: all clean run
