// 输入n个数，并逆序输出，已知整数不超过100

#include<stdio.h>
#define maxn 105
int a[maxn];
int main(){
    int x,n;
    while(scanf("%d",&x) == 1){
        a[n++] = x;
    }
    for(int i = n;i > 0;i++){
        printf("%d ",a[i]);
    }
    printf("%d",a[0]);
    return 0;
}

// 提示3-1：maxn必须是常数，不能是变量
// 提示3-2：数组一般会声明大一点
// 提示3-3： 比较大的数组一般声明在main函数外面，否则程序可能无法运行
