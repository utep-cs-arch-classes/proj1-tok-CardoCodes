GUI.o: GUI.c tokenizer.h history.h
	gcc -c GUI.c
tokenizer.o: tokenizer.c tokenizer.h
	gcc -c tokenizer.c
main: tokenizer.o GUI.o history.o
	gcc -c test tokenizer.o GUI.o

history:

clean: rm -f test *.o *~ *#
