#include <stdio.h>

#define BUFSIZE 100
char buf[BUFSIZE];
char bufp;

int getch()
{
    return bufp > 0 ? buf[--bufp] : getchar();
}

void ungetch(char c)
{
    if (bufp >= BUFSIZE)
    {
        // 输出错误
        return;
    }

    buf[bufp++] = c;
}