// 韩信点兵
/*
    给定三个非负整数 a,b,c（满足a<3,b<5,c<7），分别表示士兵三人一排、五人一排、七人一排时排尾的人数（即总人数除以3、5、7的余数）。
    需要求出在范围[10,100]内的总人数最小值，或者判断无解。
    输入包含多组数据，直到文件结束。对于每组输入，输出对应的结果。

    样例输入：
    2 1 6
    2 1 3

    样例输出：
    Case 1: 41
    Case 2: No answer
*/
#include <stdio.h>

int main(){
    int x,a,b,c,count=1,kase=0;
    while(scanf("%d%d%d",&a,&b,&c) == 3){
        int find = 0;
        for(int n = 10;n <= 100;n++){
            if((n-a)%3 == 0 && (n-b)%5 == 0 && (n-c)%7 == 0)    
            {    
                printf("Case %d: %d\n",++kase,n);
                find = 1;
            }
        }
        if(!find)
                printf("Case %d: No answer\n",++kase);
    }
    return 0;
}

