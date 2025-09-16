/*生成元
如果x+x的各个数字之和得到y，就说x是y的生成元。给出n（1<=n<=100000）,
求最小生成元。无解输出0.
例如，n=216,121,2005时的解分别是198,0,1979
*/

#include <stdio.h>
#include <string.h>
#define maxn 100005
int a[maxn];
int main(){
    int T,n;
    memset(a,0,sizeof(a));
    for(int i = 0; i <maxn;i++){
        int x = i,y=i;
        while(x>0) {y+= x%10;   x /=10;}
        if(a[maxn] == 0 || i < a[y])    a[y] = i;
    }
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        printf("%d\n",a[n]);
    }
    return 0;
}

//