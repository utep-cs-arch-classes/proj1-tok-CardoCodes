GUI.o: GUI.c tokenizer.h
	gcc -c GUI.c
tokenizer.o: tokenizer.c tokenizer.h
	gcc -c tokenizer.c
main: tokenizer.o GUI.o
	gcc -c test tokenizer.o GUI.o
clean: rm -f test *.o *~ *#
