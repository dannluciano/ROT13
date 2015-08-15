all: rot13

rot13: rot13.o main.c
	$(CC) $(CFLAGS) $^ -o $@

test: rot13.o test.c
	$(CC) $(CFLAGS) $^ -o $@

rot13.o: rot13.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f *.o rot13 test
