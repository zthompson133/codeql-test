all: c_test

c_test: c_test.c
	$(CC) -Wall -o c_test c_test.c

clean:
	$(RM) c_test
