# Makefile

CC = gcc
CFLAGS = -Wall -g
TARGET = does_IO
SRC = does_IO.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

