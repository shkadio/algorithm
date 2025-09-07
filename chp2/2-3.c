#include <stdio.h>

int main()
{
// 2-3.近似计算
/*
计算pi/4 = 1-1/3+1/5-1/7+...,直到最后一项小于10^（-6）
*/
    
    int n = 0;
    double sum = 0,term;
    do
    {
        term = 1.0/(2*n+1);
        printf("%f\n",term);
        if (n%2 == 0) sum += term;
        else sum -= term;
        n++;
    } while (term >= 1e-6);
    

    printf("%.6f\n",sum);
    
    return 0;

}