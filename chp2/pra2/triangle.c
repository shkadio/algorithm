// 倒三角
/*
    输入正整数n<=20，输出一个n层的倒三角。
    例如：当n = 5时
    输出：
#########
 #######
  #####
   ###
    #
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        for(int j = 0; j < i;j++)   printf(" ");
        for(int j = 0; j < 2*n -2*i +1; j++ )   printf("#");
        printf("\n");
    }
    return 0;
}
