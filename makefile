OBJ = main.o lex.yy.o

scanner: $(OBJ)
	gcc -o scanner $(OBJ) -lfl

lex.yy.o: lex.yy.c lotus.tab.h
	gcc -c lex.yy.c

lex.yy.c: lotus.l lotus.tab.h
	flex lotus.l

main.o: lotus.tab.h
	gcc -c main.c