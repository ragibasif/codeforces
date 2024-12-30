# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra -Wshadow

# Source file and executable
SRC = main.cpp
EXE = main

# Targets
all: $(EXE)

$(EXE): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(EXE)

run: $(EXE)
	./$(EXE)

clean:
	rm -f $(EXE)

