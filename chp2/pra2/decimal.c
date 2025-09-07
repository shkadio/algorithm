// 分数化小数
/*
输入正整数a，b，c,输出a/b的小数形式，精确到小数点后c位。
输入包含多组数据，结束标记为a=b=c
样例输入：
1 6 4 

0 0
样例输出：
Case 1: 0.1667
*/

#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,kase=0;
    while(scanf("%d%d%d",&a,&b,&c) == 3){
        if(a==0 && b==0 && c==0)    break;
        double d = (double)a/b - a/b;   //小数部分
        printf("Case %d: 0.",++kase);
        for(int i = 0;i < c;i++){
            if(i == c - 1){
                int last  = (floor)(d*10+0.5);
                printf("%d\n",last);
                // printf("%d\n",(floor)(d*10+0.5));

                break;
            }
            printf("%d",(int)(d*10));
            d = d*10-(int)(d*10);
            
        }
    }
    return 0;
}