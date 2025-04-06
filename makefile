CC = gcc
CFLAGS = -Wall

SRCS = src/main.c src/operations.c
OBJS = main.o operations.o

TARGET = sha256c

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: src/main.c src/operations.h
	$(CC) $(CFLAGS) -c src/main.c

operations.o: src/operations.c src/operations.h
	$(CC) $(CFLAGS) -c src/operations.c


# Debug build with unit testing
debug: $(OBJS) debug.o
	$(CC) $(CFLAGS) -o debug $(OBJS)

debug.o: tests/operations_test.c libs/unity.h
	$(CC) $(CFLAGS) -c tests/operations_test.c

clean:
	rm *.o $(TARGET) debug