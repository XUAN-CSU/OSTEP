# Makefile

CC = gcc
CFLAGS = -fno-stack-protector -z execstack -no-pie -g
TARGET = stack_smash
SRC = stack_smash.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

