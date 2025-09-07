#include <stdio.h>
#include <math.h>

int main()
{
// 1.平均数
    // int a,b,c;
    // scanf("%d%d%d",&a,&b,&c);
    // printf("%.3f\n",(a+b+c)/3.0);

// 2.温度：输入华氏温度f，输出对应的摄氏温度c,保留3位小数。
    // double f;
    // scanf("%lf",&f);
    // printf("%.3f\n",5*(f-32)/9.0);

// 3.连续和
    // int n;
    // scanf("%d",&n);
    // printf("%d\n",n*(n+1)/2);

// 4.正弦和余弦
    // int n;
    // double x;
    // const double pi = acos(-1.0);
    // scanf("%d",&n);
    // x = n*(2*pi)/360;

    // printf("%f\n",x);
    // printf("%.3f %.3f\n",sin(x),cos(x));

// 5.打折：一件衣服95元，若消费满300元，可打85折。输入购买衣服件数，输出需要支付的金额，保留两位小数
    // int n,m;
    // scanf("%d",&n);
    // m = n*95;
    // if(m < 300 )
    //     printf("%d\n",m);
    // else
    //     printf("%.2f\n",m*0.85);

// 6.三角形：输入三角形3条边的长度（均为正整数），判断是否能构成直角三角形的3个边长。
    //如果可以，输出yes，如果不能，输出no。如果无法构成三角形，输出not a triangle
    // int a,b,c,t;
    // scanf("%d%d%d",&a,&b,&c);
    // if(a+b > c && a+c > b && b+c > a)
    // {
    //     a = a^2;
    //     b = b^2;
    //     c = c^2;
    //     if(a+b == c || a+c == b || b+c == a)
    //         printf("yes\n");
    //     else
    //         printf("no\n");
    // }else{
    //     printf("not a triangle\n");
    // }

// 7.年份：输入年份，判断是否为闰年。如果是，输出yes,否则输出no
    // int year;
    // scanf("%d",&year);
    // if((year% 4 == 0 && year%100 != 0) || (year % 400 ==0) )
    //     printf("yes\n");
    // else    
    //     printf("no\n");

// && || ！ 运算顺序从左到右
    // int a,b,c;
    // scanf("%d%d%d",&a,&b,&c);
    // printf("%d %d %d\n",a&&b||c,(a&&b)||c,a&&(b||c));


    return 0;
}