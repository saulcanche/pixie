# Compiler and flags
CXX      := g++
CXXFLAGS := -Wall -Wextra -std=c++17 -Iinclude
DEBUG_FLAGS := -g -O0 -DDEBUG
LDFLAGS  := 
# Directories
SRC_DIR := src
OBJ_DIR := obj
BIN     := pixie

# Files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Default rule
all: $(BIN)

# Debug build
debug: CXXFLAGS += $(DEBUG_FLAGS)
debug: clean $(BIN)

# Link the executable
$(BIN): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)

# Compile source files to object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create the object directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Clean build artifacts
clean:
	rm -rf $(OBJ_DIR) $(BIN)

.PHONY: all debug clean
