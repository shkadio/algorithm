// 回文词
/*
输入一个字符串，判断它是否为回文串以及镜像串。输入字符串保证不含数字0；
所有镜像串，就是左右镜像之后和原串相同
每个字符的镜像如下所示：
character   reverse    character   reverse    character   reverse
    A           A          M          M         Y           Y
    B                      N                    Z           5
    C                      O          O         1           1
    D                      p                    2           S
    E           3          Q                    3           E
    F                      R                    4
    G                      S          2         5           Z
    H           H          T          T         6
    I           I          U          U         7
    J           L          V          V         8           8
    K                      W          W         9
    L           J          X          X
输入的每行包含一个字符串，判断它是否为回文和镜像串（共4种组合）。每行数据之后输出一个空行
样例输入：
NOTAPALINDROME
ISAPALINILAPASI
2A3MEAS
ATOYOTA

样例输出：
NOTAPALINDROME -- is not a palindrome.

ISAPALINILAPASI -- is a regular palindrome

2A3MEAS -- is a mirrored string.

ATOYOTA -- is a mirrored palindrome.

*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>
const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char*msg[] = {"not a palindrome","a regular palindrome","a mirrored string","a mirrored palindrome"};

char r(char ch){
    if(isalpha(ch)) return rev[ch-'A'];
    return rev[ch-'0'+25];
}
int main(){
    char s[30];
    while(scanf("%s",s) == 1){
        int len = strlen(s);
        int p = 1,m = 1;
        for(int i = 0; i< (len+1)/2; i++){
            if(s[i] != s[len-i-1]) p = 0;
            if(r(s[i]) != s[len-i-i])  m = 0;
        }
        printf("%s -- is %s.\n\n",s,msg[m*2+p]);
    }
    return 0;
}

/*
    提示3-20：头文件ctype.h中定义的isalpha、isdigit、isprint等工具可以用来判断字符的属性
    而toupper、tolower等工具可以用来转换大小写。
    如果ch是大写字母，则ch-'A'就是它在字母表中的序号。、
    
*/

