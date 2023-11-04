#include<stdio.h>

int main (){
    int T=0;//整数个数
    while(scanf("%d",&T) != EOF){
        int i,j;
        int a[T];
        for(i=0;i<T;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<T;i++){
            printf("%c",a[i]);
        }
        putchar('\n');
    }

    return 0;
}