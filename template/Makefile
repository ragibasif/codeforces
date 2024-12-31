# Variables

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wshadow -Wall -Wextra

SRC = main.cpp # Source file(s)
TARGET = app   # Name of the output executable

# Build configurations
RELEASE_FLAGS = -O2 -Wno-unused-result
DEBUG_FLAGS = -g -fsanitize=address -fsanitize=undefined -D_GLIBCXX_DEBUG

# Targets
.PHONY: all clean

all: release

release: $(SRC)
	$(CXX) $(CXXFLAGS) $(RELEASE_FLAGS) -o $(TARGET) $(SRC)

debug: $(SRC)
	$(CXX) $(CXXFLAGS) $(DEBUG_FLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

