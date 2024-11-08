# Makefile to compile and run ahm24b_specialval.cpp and ahm24b_seriessum.cpp with time clang++

CXX = clang++
CXXFLAGS = -std=c++11 -Wall

# Default target to compile both programs
all: specialval seriessum

# Compile ahm24b_specialval.cpp
specialval: ahm24b_specialval.cpp
	@echo "Compiling ahm24b_specialval.cpp..."
	@if [ -e "ahm24b_specialval.cpp" ]; then \
		echo "Found ahm24b_specialval.cpp"; \
	else \
		echo "Error: ahm24b_specialval.cpp not found in current directory."; \
		exit 1; \
	fi
	time $(CXX) $(CXXFLAGS) -o specialval ahm24b_specialval.cpp

# Compile ahm24b_seriessum.cpp
seriessum: ahm24b_seriessum.cpp
	@echo "Compiling ahm24b_seriessum.cpp..."
	@if [ -e "ahm24b_seriessum.cpp" ]; then \
		echo "Found ahm24b_seriessum.cpp"; \
	else \
		echo "Error: ahm24b_seriessum.cpp not found in current directory."; \
		exit 1; \
	fi
	time $(CXX) $(CXXFLAGS) -o seriessum ahm24b_seriessum.cpp

# Run specialval executable
run_specialval: specialval
	@echo "Running specialval..."
	./specialval

# Run seriessum executable
run_seriessum: seriessum
	@echo "Running seriessum..."
	./seriessum

# Clean up compiled files
clean:
	@echo "Cleaning up..."
	rm -f specialval seriessum

.PHONY: all clean run_specialval run_seriessum