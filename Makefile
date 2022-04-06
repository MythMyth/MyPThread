CC = g++

SRC = main.cpp MyPThread.cpp
OBJ = build/main.o build/MyPThread.o
TARGET = build/TestMPThread
LIB = -pthread

MyPThread: $(OBJ)
	$(CC) $(OBJ) $(LIB) -o $(TARGET)

$(OBJ):
	$(CC) -c $(notdir $(basename $@)).cpp -o $@

clean: 
	rm -rf build
	mkdir build