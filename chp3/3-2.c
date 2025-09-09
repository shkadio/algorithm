// 开灯问题
/*
有n盏灯，第一个人把所有灯打开，
第二个人按下所有编号为2的倍数的开关，
第三个人按下所有编号为3的开关，以此类推。
共k人，请问最后那些灯开着
*/

// 我写的代码
// #include<stdio.h>
// #define maxn 1005

// int a[maxn];

// int main(){
//     int n,k;

//     scanf("%d%d",&n,&k);
//     for(int i = 1;i <= n;i++){
//         a[i] = 1;   //1表示灯灭，0表示灯亮
//     }
//     // 对于由1~k倍的开灯的逆过程，由k倍~1的关灯过程
//     while(k > 0){
//         for(int i = k;i <= n;i+=k){
//             if(a[i] == 1){
//                 a[i] = 0;
//             }else{
//                 a[i] = 1;
//             }
//         }
//         k--;
//     }
//     for(int i = 1;i < n;i++){
//         if(a[i] == 1)   continue;
//         printf("%d ",i);
//     }
//     if(a[n] == 0)   printf("%d\n",n);
//     return 0;
// }

// 书上的代码

#include <stdio.h>
#include <string.h>
#define maxn 1010
int a[maxn];
int main(){
    int n,k,first = 1;
    // 把数组a清零，比for循环更方便快捷
    memset(a,0,sizeof(a));
    scanf("%d%d",&n,&k);
    for(int i = 1; i <=k; i++)
        for(int j = 1;j <=n; j++)
            if(j % i == 0)  a[j] = !a[j];
    for(int i = 1;i <=n;i++){
        if(a[i]){
            // 设置first标志，如果是第一个数，不输出空格，否则输出空格
            if(first) first = 0;
            else printf(" ");
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;
}
