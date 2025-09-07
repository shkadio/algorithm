#include <stdio.h>
#include <math.h>
int main()
{
// 2-1.aabb:输出所有形如aabb的4位完全平方数
    // 1.
    // for(int a = 1;a <= 9;a++){
    //     for(int b = 0;b<=9;b++){
    //         int n = a*1100+b*11;
            
    //         // 避免精度丢失问题 eg sqrt(25) = 4.9999999999/5.00000000001
    //         // c++11标准中round（sqrt（n））可解决问题
    //         int m = floor(sqrt(n)+0.5);  //四舍五入
            

    //         if(m*m == n){
    //             printf("%d\n",n);
    //         }
    //     }
    // }

    // 2. 枚举平方根
    for (int i = 0; ; i++)
    {
        int x  = i*i;
        if(x<1000) continue;
        if(x>9999) break;

        int hi = x/100; // 取出百位和千位
        int lo = x%100; // 取出个位和十位
        if(hi/10 == hi%10 && lo/10 == lo%10)
            printf("%d\n",x);

    }
    


    
    return 0;
}

// 提示2-3： 编写程序时，要特别留意“当前行”的跳转和变量的改变
// 提示2-4：建议尽量缩短变量的定义范围。例如，在for循环的初始化部分定义循环变量
// 提示2-7：浮点运算可能存在误差。在继续浮点数比较时，应考虑浮点误差

