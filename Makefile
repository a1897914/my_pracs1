# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -stdlib=libc++

# Executable name
EXECUTABLE = myprogram

# Source files
SOURCES = main.cpp Pokemon.cpp Dice.cpp Attack.cpp Agile.cpp Defend.cpp Opponent.cpp Player.cpp

# Generate object file names
OBJECTS = $(SOURCES:.cpp=.o)

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
