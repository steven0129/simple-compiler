#include <stdlib.h>
#include <string.h>

#ifndef LOTUS
#define LOTUS

#define IDENTIFIER 1
#define ELSE 2
#define EXIT 3
#define INT 4
#define IF 5
#define READ 6
#define RETURN 7
#define WHILE 8
#define WRITE 9
#define INTEGER 10
#define ADD 11
#define SUB 12
#define MUL 13
#define DIV 14
#define MOD 15
#define EQV 16
#define NONEQV 17
#define GREEQV 18
#define GRE 19
#define LESSEQV 20
#define LESS 21
#define AND 22
#define OR 23
#define NOT 24
#define ASSIGN 25
#define SEMICOLON 26
#define COMMA 27
#define OPENP 28
#define CLOSEP 29
#define BIGOPENP 30
#define BIGCLOSEP 31
#define ERROR 32
#endif

union YYSTYPE {
    int integer;
    char *string;
};

