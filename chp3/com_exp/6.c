/*
找到一个环状DNA串的最小表示。环状串有n种表示（从不同位置开始顺时针读取），其中字典序最小的那个就是最小表示。
输入：一个长度为n（n≤100）的环状DNA串的一种表示（只包含'A','C','G','T'）。
输出：该环状串的最小表示。
*/

#include <stdio.h>
#include <string.h>
#define maxn 105

int less(const char* s, int p,int q){
    int n = strlen(s);
    for(int i = 0; i < n;i++)
        if(s[(p+i)%n] != s[(q+i)%n])
            return s[(p+i)%n] < s[(q+i)%n];
    return 0;
}

int main(){
    int T;
    char c[maxn];
    scanf("%d",&T);
    while(T--){
        int n = strlen(c);
        int ans = 0;
        for(int i = 0; i < n;i++){
            if(less(c,i,ans)) ans = i;
        }
        for(int i = 0; i < n; i++)
            putchar(c[i+ans]%n);
        putchar("\n");
    }
    return 0;
}