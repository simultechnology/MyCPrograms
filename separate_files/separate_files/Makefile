TARGET = sort
CFLAGS = -g

all: $(TARGET)

$(TARGET): sort.o lib.o
			gcc $(CFLAGS) sort.o lib.o -o $(TARGET)

sort.o: lib.h sort.c
			gcc $(CFLAGS) -c sort.c

lib.o: lib.h lib.c
			gcc $(CFLAGS) -c lib.c

clean:
	rm -f $(TARGET) sort.o lib.o
