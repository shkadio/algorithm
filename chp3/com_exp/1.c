// Tex中的引号
/*
在Tex中，左双引号是“``”,右双引号是“''”。
输入一篇包含双引号的文章，将其转换成Tex格式
样例输入：
"To be or not to be," quoth the Bard,"that
is the question".
样例输出：
``To be or not to be,'' quoth the Bard,``that
is the question''.
*/

/*
    提示3-14：使用fgetc(fin)可以从打开文件fin中读取一个字符。
    一般情况下应当在检查它不是EOF(文件结束)后再将其转换成char值。
    从标准输入读取一个字符可以用getchar，它等价于fgetc(stdin)

    提示3-15：在使用fgetc和getchar时，应该避免写出和操作系统相关的程序
    fgetc和getchar读取下一个字符，如果是换行符，windows是“\r”和“\n”,linux是“\n”，macos是“\r”
    在windows下读取windows文件，会把“\r”吃掉，然后才是“\n”

    提示3-16：“fgets(buf,maxn,fin”将读取完整的一行放在字符数组buf中。
    应当保证buf足够存放下文件的一行内容。
    除了在文件结束前没有遇到“\n”这种特殊情况外，buf总是以“\n”结尾。
    当一个字符都没有读到时，fgets返回NULL
*/

#include <stdio.h>

int main(){
    int c,q=1;
    while((c = getchar()) != EOF){
        if(c == '"'){   
            printf("%s",q ? "``":"''"); 
            q = !q;
        }
        else    printf("%c",c);
    }
    return 0;
}