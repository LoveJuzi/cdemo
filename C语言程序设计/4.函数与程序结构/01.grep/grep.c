#include <stdio.h>

#define MAXLEIN 1000

int getline2(char s[], int lim);

int main()
{
    char s[MAXLEIN];
    // 读取所有行的方法
    while (getline2(s, MAXLEIN) > 0)
    {
        printf("%s\n", s);
    }

    return 0;
}

// I/O 相关函数
// 1. 读取至多 lim 个字符
// 2. 读取到行标志返回
// 3. 读取到文件结束标志返回
//
// 函数返回读取到字符个数
int getline2(char s[], int lim)
{
    int cnt = 0;
    char c;
    for (int i = 0; i < lim; i++) // 最多读取这么多的字符
    {
        if ((c = getchar()) == EOF)
        {
            break;
        }

        if (c == '\n')
        {
            break;
        }

        s[cnt] = c;
        cnt++;
    }
    s[cnt] = '\0'; // 添加C语言的字符串的结束标志

    return cnt;
}