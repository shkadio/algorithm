// 水仙花数
/*
    输出100~999中的所有水仙花数。
    若3位数ABC满足ABC=A^3+B^3+C^3,则称其为水仙花
*/
#include <stdio.h>
int main(){
    int A,B,C;
    for(int a = 100; a <= 999; a++){
        A = a/100;
        B = a/10%10;
        C = a%10;
        if(A*A*A + B*B*B + C*C*C == a)  printf("%d\n",a);
    }
    return 0;
}