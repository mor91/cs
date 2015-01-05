# All Targets
all: RoadStress

# Tool invocations
# Executable "RoadStress" depends on the files road.o and busyroute.o.
RoadStress: bin/BusyRoute.o bin/Road.o
	@echo 'Building target: RoadStress'
	@echo 'Invoking: C++ Linker'
	g++ -o bin/RoadStress src/RoadStress.cpp bin/BusyRoute.o bin/Road.o
	@echo 'Finished building target: assignment1'
	@echo ' '

# Depends on the source and header files
bin/BusyRoute.o: src/BusyRoute.cpp
	g++ -g -Wall -Weffc++ -c -Linclude -o bin/BusyRoute.o src/BusyRoute.cpp

# Depends on the source and header files 
bin/Road.o: src/Road.cpp
	g++ -g -Wall -Weffc++ -c -Linclude -o bin/Road.o src/Road.cpp

#Clean the build directory
clean: 
	rm -f bin/*
