c_test: c_test.o
	gcc  c_test.o -o c_test

clean: rm -f c_test.o
