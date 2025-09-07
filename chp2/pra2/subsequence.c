// 子序列的和
/*
输入两个正整数 n<m<1e6,输出1/（n^2）+1/(n+1)^2+...+1/m^2,保留5位小数
输入包含多组数据，结束标记为 n= m = 0.
样例输入：
2 4 
65536 655360
0 0
样例输出：
Case 1: 0.42361
Case 2: 0.00001
*/

#include <stdio.h>

int main(){
    int n,m,kase=0;
    double sum = 0;
    while(scanf("%d%d",&n,&m) == 2){
        if(n==0 && m == 0)  break;
        sum = 0;
        for(int i = n; i <= m;i++){
            double a = 1.0/i/i;
            sum += a;
        }
        printf("Case %d: %.5f\n",++kase,sum);
    }
    return 0;
}