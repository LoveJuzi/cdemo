#include <stdio.h>
#include <string.h>

#define MAXTOKEN 100

// 定义分词类型
enum
{
    NAME,
    PARENS,
    BRACKETS,
    LEFTPARENS,
    RIGHTPARENS,
    LEFTBRACKETS,
    RIGHTBRACKETS,
    POINTER,
    END
};

char *getToken();
int getTokentype();
int getch();
void ungetch();
void parsetoken();

void initDcl();
char *getOut();
char *getName();
char *getDatatype();
void initDatatype();
void dcl();