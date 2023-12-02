CC = g++
CFLAGS = -Wall -Wextra -c
TARGET = deque

all: $(TARGET)

$(TARGET): main.o deque.o
	$(CC) -o $(TARGET) main.o deque.o

main.o: main.cpp deque.h
	$(CC) $(CFLAGS) -o main.o main.cpp

deque.o: deque.cpp deque.h
	$(CC) $(CFLAGS) -o deque.o deque.cpp


clean:
	$(RM) deque *.o *~
