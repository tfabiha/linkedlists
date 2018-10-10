all: main.o linked.o
	gcc main.o linked.o

main.o: main.c linked.h
	gcc -c main.c

linked.o: linked.c linked.h
	gcc -c linked.c

