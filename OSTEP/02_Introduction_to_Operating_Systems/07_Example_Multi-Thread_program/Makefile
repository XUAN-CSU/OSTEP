# Makefile

CC = gcc
CFLAGS = -Wall -g -pthread
TARGET = multi-thread
SRC = thread.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

