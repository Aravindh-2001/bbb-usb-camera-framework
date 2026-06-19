CC=gcc

CFLAGS=-Wall -Iinclude

SRC=src/main.c src/camera.c

TARGET=camera_capture

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
