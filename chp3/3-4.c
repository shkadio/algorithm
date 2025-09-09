// 竖式问题
/*
找出所有形如abc*de的算式，使得在完整的竖式中，所有数字都属于一个特定的数字集合。
输入数字集合（相邻数字之间没有空格），输出所有竖式。
每个竖式前应有编号，之后应有一个空行。最后输出解的总数
样例输入：
2357
样例输出：
<1>
..775
x..33
-----
.2325
2325.
-----
25575

The number of solutions = 1
*/

#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0;
    char s[20], buf[99];
    scanf("%s", s);
    for (int abc = 100; abc < 1000; abc++)
        for (int de = 10; de < 100; de++)
        {
            int x = abc * (de % 10), y = abc * (de / 10), z = abc * de;
            sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
            int ok = 1;
            for (int i = 0; i < strlen(buf); i++)
                if (strchr(s, buf[i]) == NULL)  ok = 0;
            if (ok)
            {
                printf("<%d>\n", ++count);
                printf("%5d\nX%4d\n-----\n%5d\nX%4d\n-----\n%5d\n\n", abc, de, x, y, z);
            }
        }
    printf("The number of solutions = %d\n", count);
    return 0;
}

// 提示3-8：c语言中的字符型用关键字char表示，它实际存储的是字符的ascii码。字符常量可以使用单引号法表示，在语法上可以把字符当作int型使用
// 提示3-9： 在“scanf("%s", s)”中，不要在s前面加上&，如果是字符串数组char s[maxn][maxl],可以使用“scanf("%s", s[i]);”读取第i个字符串。注意“scanf("%s",s)”遇到空白字符会停下来

// %5d:表示按照5位数打印，不足的在前面补空格（%03d则为补0）

// 可以用sprintf把信息输出到字符串，用法和printf、fprintf相似
// strchr：在字符串中查找单个字符
// strlen(s):获取字符串s的实际长度 eg 输入2357，实际长度为5（包括‘\0’）

// 提示3-11：c语言中的字符串是以“\0”结尾的字符数组，可以使用strlen返回字符串s中结束标记前的字符个数
// 提示3-12：字符串的本质是数组，只能使用strcpy（a,b）、strcmp（a,b）、strcat(a,b)来副职、比较和连接
