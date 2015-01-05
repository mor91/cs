all:CarSim

CC = g++
CFLAGS = -g -c -Linclude -Iinclude -Weffc++ -o
LFLAGS = -o



CarSim: Compile
	
	@echo 'Linking Source files...'
	$(CC) $(LFLAGS) bin/CarSim bin/main.o bin/AddCarEvent.o  bin/CarFaultEvent.o bin/Car.o bin/CarReport.o bin/Event.o bin/JunctionReport.o bin/Report.o bin/Road.o bin/Junction.o bin/RoadReport.o bin/ini.o
	@echo 'Done.'

Compile:
	
	@echo 'Compiling source files...'
	$(CC) $(CFLAGS)  bin/AddCarEvent.o src/AddCarEvent.cpp
	$(CC) $(CFLAGS)  bin/CarFaultEvent.o src/CarFaultEvent.cpp
	$(CC) $(CFLAGS)  bin/Car.o src/Car.cpp
	$(CC) $(CFLAGS)  bin/Junction.o src/Junction.cpp
	$(CC) $(CFLAGS)  bin/CarReport.o src/CarReport.cpp
	$(CC) $(CFLAGS)  bin/Event.o src/Event.cpp
	$(CC) $(CFLAGS)  bin/JunctionReport.o src/JunctionReport.cpp
	$(CC) $(CFLAGS)  bin/Report.o src/Report.cpp
	$(CC) $(CFLAGS)  bin/Road.o src/Road.cpp
	$(CC) $(CFLAGS)  bin/RoadReport.o src/RoadReport.cpp
	$(CC) $(CFLAGS)  bin/main.o src/main.cpp
	$(CC) $(CFLAGS)  bin/ini.o src/ini.cpp

clean:
	rm -rf bin/*
	rm -rf output/*
