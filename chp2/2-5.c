// #include <stdio.h>

// int main()
// {
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);

//     const int INF = 1000000000;
//     int max = -INF;
//     int min = INF;
//     int x,n=0,s=0;
//     while(scanf("%d",&x) == 1)
//     {
//         s+=x;
//         if(x<min) min = x;
//         if(x>max) max = x;
//         n++;
//     }
//     printf("%d %d %.3f",max,min,(double)s/n);
//     return 0;
// }

// 提示2-19：在windows下，输入完毕后先按enter键，再按ctrl+z键，最后按enter键即可结束输入。在linux下，输入完毕后按ctrl+d即可结束输入。
// 在比赛前了解文件读写的相关规定，是标准输入输出，还是文件输入输出，如果是文件输入输出，是否禁止用重定向方式访问文件。

//重定向版（本地）:标准比赛代码
//只有定义了LOCAL，重定向语句才起作用，提交代码时，删除“#define LOCAL”
// #define LOCAL
// #include <stdio.h>
// #define INF 100000000
// int main()
// {
// #ifdef LOCAL
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
//     int max = -INF;
//     int min = INF;
//     int x,n=0,s=0;
//     while(scanf("%d",&x) == 1)
//     {
//         s+=x;
//         if(x<min) min = x;
//         if(x>max) max = x;
//     /*
//     printf("x = %d, mid = %d, max = %d",x,min,max);
//     */
//         n++;
//     }
//     printf("%d %d %.3f",max,min,(double)s/n);
//     return 0;
// }


//fopen版：要求文件输入输出，但禁止重定向情况
#include <stdio.h>
#define INF 1000000000;

int main()
{
    FILE *fin,*fout;
    // fin = fopen("data.in","rb");
    // fout = fopen("data.out","wb");
    //不用修改其他代码，使用下面代码即可切换为标准输入输出
    fin = stdin;
    fout = stdout;

    int max = -INF;
    int min = INF;
    int x,n=0,s=0;
    while(fscanf(fin,"%d",&x) == 1)
    {
        s+=x;
        if(x<min) min = x;
        if(x>max) max = x;
        n++;
    }
    fprintf(fout,"%d %d %.3f",max,min,(double)s/n);
    fclose(fin);
    fclose(fout);
    return 0;
}
