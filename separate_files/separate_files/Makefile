TARGET = sort
CFLAGS = -g

all: $(TARGET)

$(TARGET): sort.o compare.o lib.o
			gcc $(CFLAGS) sort.o compare.o lib.o -o $(TARGET)

sort.o: compare.h sort.c
			gcc $(CFLAGS) -c sort.c

compare.o: lib.h compare.h compare.c
			gcc $(CFLAGS) -c compare.c

lib.o: lib.h lib.c
			gcc $(CFLAGS) -c lib.c

clean:
	$(RM) $(TARGET) *.o
