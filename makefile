CC = g++
CFLAGS = -Wall
DEPS = player.h
OBJ = main.o player.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

adventure-knight: $(OBJ)
	g++ -o $@ $^ $(CFLAGS)
