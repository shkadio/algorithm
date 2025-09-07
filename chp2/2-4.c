// 输入n，计算s = 1! + 2！ + 3！ + 。。。＋　ｎ！
#include <stdio.h>
#include <time.h>
int main()
{
    const int MOD = 1000000;
    int n,sum = 0;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        int factorial = 1;
        for(int j = 1;j <= i;j++)
            factorial  = factorial * j % MOD;
        sum = (sum + factorial) % MOD;
    }
    printf("%d\n",sum%1000000);
    printf("Time used = %.2f\n",(double)clock()/CLOCKS_PER_SEC);
    return 0;
}

// 提示2-16：要计算只包含加法、减法和乘法的整数表达式除以正整数n的余数，可以在每步计算后对n取余，结果不变
// 提示2-17：可以使用time.h和clock()函数获得程序运行时间。可以使用管道来降低输入对耗时的影响（echo 20 | 2-4.exe）

//循环中常见的两个问题：算术运算溢出和程序效率低下
//两个实用工具：输出中间结果和计时函数