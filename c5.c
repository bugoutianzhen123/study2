#include<stdio.h>

int main(){
    int a,n,i,j;
    printf("100以内的素数有：\n");
    n=0;
    for (i=2;i<=100;i++)
    {
        a = 0;
        for(j=2;j<i;j++){       
            if (i%j == 0 )
            a++;
        }
        if (a == 0){
            n++;
            printf("%2d ",i);
        }
        if (n==5)//每五个数一行
        {
            putchar('\n');
            n=0;
        }
    }
    return 0;
}