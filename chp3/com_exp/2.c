// WERTYU
/*
输入一个错位后敲出的字符串（所有字母均大写），输出打字员本来想打错的句子。
输入保证合法。
样例输入：
O S, GOMR YPFSU/
样例输出：
I AM FINE TODAY.
*/

#include <stdio.h>

char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main(){
    int i,c;
    while((c=fgetchar()) !=EOF){
        for(i=1;s[i] && s[i] !=c;i++);
        if(s[i])    putchar(s[i-1]);
        else    putchar(c);
    }
    return 0;
}