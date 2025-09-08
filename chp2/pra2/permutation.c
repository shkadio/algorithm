// 排序
/*
用1， 2， 3， …， 9组成3个三位数abc， def和ghi， 每个数字恰好使用一次， 
要求abc： def： ghi＝ 1： 2： 3。 
按照“abc def ghi”的格式输出所有解， 每行一个解。 
提示： 不必太动脑筋。
*/

#include <stdio.h>

void judge(int n,int arr[]){
    arr[n%10] = 1;
    arr[n/10%10] = 1;
    arr[n/100] = 1;
}

int main(){
    for(int i = 112;i < 334;i++){
        int abc = i,def = 2*i,ghi = 3*i,j=1;
        int arr[10] = {0,0,0,0,0,0,0,0,0,0};
        judge(abc,arr);
        judge(def,arr);
        judge(ghi,arr);
        for(j = 1; j < 10;j++){
            if(arr[j] != 1){
                break;
            }
        }
        if(j == 10){
            printf("%d %d %d\n",abc,def,ghi);
        }
    }
    return 0;
}