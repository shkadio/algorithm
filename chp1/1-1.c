#include <stdio.h>
#include <math.h>

int main() {
    printf("%d\n",8/5);   //output: 1
    printf("%d\n",8.0/5);   //output: -1717986918
    printf("%.1f\n",8/5); //output: 0.0
    printf("%.1f\n",8.0/5); //output: 1.6
    printf("%.2f\n",8.0/5); //output: 1.60
    printf("%f\n",8.0/5);   //output: 1.600000

    printf("%.8f\n",1+2*sqrt(3)/(5-0.1)); //output: 1.70695951
    return 0;
}

// 提示1-1：整数值用%d，浮点值用%f
// 提示1-2：整数相除结果为整数，浮点数相除结果为浮点数