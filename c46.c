#include<stdio.h>

int main (){
    int i,n;
    int num,times[36]={0},and;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        and = 0;
        for(num;num!=0;num /= 10)
        {
            and += num%10;
        }
        times[and-1]++;
    }
    int N=0;//朋友数个数
    for(i=0;i<36;i++){
        if (times[i] != 0 )N++;
    }
    printf("%d\n",N);
    for(i=0;i<36;i++){
        if (times[i] != 0 )printf("%d ",i+1);
    }

}