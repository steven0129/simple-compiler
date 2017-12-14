OBJ = lex.yy.o lotus.tab.o
CC = gcc
LEX = flex
SYNTAX = bison

parser: $(OBJ)
	$(CC) $(OBJ) -o parser -ll -ly

lex.yy.o: lex.yy.c lotus.tab.h
	$(CC) -c lex.yy.c

lex.yy.c: lotus.l lotus.tab.h
	$(LEX) lotus.l

lotus.tab.o: lotus.tab.c lotus.tab.h
	$(CC) -c lotus.tab.c

lotus.tab.c lotus.tab.h: lotus.y
	$(SYNTAX) -d lotus.y

clean:
	rm -f *.o *.c *.h parser