# TICTACTOE
CC = g++
FLAGS = -std=c++11 -O3
LIBS = -L/usr/lib
INCS = -I/usr/include -I./include -I../include

BUILD = build
SRC = src

OBJECTS = $(BUILD)/TTTQ.o \
		  $(BUILD)/TTTSA.o \
		  $(BUILD)/TTTState.o \
		  $(BUILD)/TTTAction.o

TARGET = $(BUILD)/main

LIBOBJECTS = ../build/Q.o \
			 ../build/SA.o \
			 ../build/State.o \
			 ../build/Action.o \
			 ../build/Utility.o

all: dir lib $(TARGET)

lib:
	$(MAKE) -C ../

dir:
	mkdir -p $(BUILD)

clean:
	rm $(BUILD)/*.o $(BUILD)/main 2> /dev/null

$(BUILD)/TTTQ.o: $(SRC)/TTTQ.cpp $(LIBOBJECTS)
$(BUILD)/TTTSA.o: $(SRC)/TTTSA.cpp $(LIBOBJECTS)
$(BUILD)/TTTState.o: $(SRC)/TTTState.cpp $(LIBOBJECTS)
$(BUILD)/TTTAction.o: $(SRC)/TTTAction.cpp $(LIBOBJECTS)

$(TARGET) : $(OBJECTS) $(LIBOBJECTS) $(SRC)/main.cpp
	$(CC) $(FLAGS) $(INCS) $^ -o $@ $(LIBS)

$(OBJECTS) :
	$(CC) -c $(FLAGS) $(INCS) $^ -o $@ $(LIBS)


