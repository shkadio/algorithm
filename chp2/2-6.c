// 2-6.数据统计II
/*
    输入一些整数，每组数据第一行是整数个数n，第二行是n个整数，输入保证这些书都是不超过1000的整数
    输入包含多组数据，每组数据第一行是整数个数n，第二行是n个整数。
    n=0位输入结束标记，程序应当忽略这些数据。相邻两组数据之间应输出一个空行
*/

#include <stdio.h>
#define INF 1000
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int x,n=0,max=-INF,min=INF,s=0,kase=0;
    while(scanf("%d",&n) == 1 && n){
        int s = 0;
        int max = -INF;
        int min = INF;
        for(int i = 0;i<n;i++){
            scanf("%d",&x);
            s += x;
            if(x>max) max=x;
            if(x<min) min=x;
        }
        if(kase) printf("\n");  
        printf("Case %d: %d %d %.3f\n",++kase,min,max,(double)s/n);

    }
    return 0;
}

//kase：1.作为当前数据编号的计数器 2.输出第二组或以后结果时，会在前面加一个空行。

// 提示2-26：在多数据的题目中，一个常见的错误是：在计算完一组数据后某些变量没有重置
