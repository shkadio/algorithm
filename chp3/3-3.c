// 蛇形填数
/*
在n*n方阵填入1,2，。。。，n*n，要求填成蛇形。例如，n=4时方阵为：
10 11 12 1
9  16 13 2
8  15 14 3
7  6  5  4 
*/

#include <stdio.h>
#include <string.h>
#define maxn 9
int a[maxn][maxn];

int main(){
    int n,x,y,tot = 0;
    scanf("%d",&n);
    memset(a,0,sizeof(a));

    tot = a[x=0][y=n-1] = 1;
    while(tot < n*n){
        while(x+1<n && !a[x+1][y]) a[++x][y] = ++tot;
        while(y-1>=0 && !a[x][y-1]) a[x][--y] = ++tot;
        while(x-1>=0 && !a[x-1][y]) a[--x][y] = ++tot;
        while(y+1<n && !a[x][y+1]) a[x][++y] = ++tot;
    }
    for(x=0;x<n;x++){
        for(y=0;y<n;y++)
            printf("%3d",a[x][y]);
        printf("\n");
    }
    return 0;
}

// 提示3-7：在很多情况下，最好是在做一件事情之前检查是不是可以做，而不要做完后再后悔。