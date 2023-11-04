#include<stdio.h>

int main (){
    int n;//整数
    int times = 0;//次数
    scanf("%d",&n);
    while(n != 1){
        switch(n%2){
            case 0: n /= 2;break;
            case 1: n = (3*n+1)/2;break;
        }
        times += 1;
        //printf("%d %d\n",n,times);//检查
    }
    printf("%d",times);

    return 0;
}