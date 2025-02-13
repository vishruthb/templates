CXX = clang++
CXXFLAGS = -std=c++23 -O2 -Wall -g
TARGET = test

%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $(TARGET)

.PHONY: clean
clean:
	rm -rf $(TARGET) $(TARGET).dSYM 

