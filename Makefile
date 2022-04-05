CC = g++

SRC = main.cpp MyPThread.cpp
OBJ = build/main.o build/MyPThread.o
TARGET = build/TestMPThread

MyPThread: $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

$(OBJ):
	$(CC) -c $(notdir $(basename $@)).cpp -o $@