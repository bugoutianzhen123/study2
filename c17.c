#include<stdio.h>
int main (){
    int m,n,i,j,k;
    int a,b=0,c;
    int s=0;//每行个数
    scanf("%d%d",&m,&n);//第m个到第n个素数
    //b 第b个素数
    for (i=2;;i++){       
        a=0;
        for(j=2;j<i;j++)//判断是否是素数
        {
            if(i%j == 0){
                a++;
            }
        }
        if(a==0){
            b++;
            if (b >= m && b <= n){
                printf("%d ",i);
                s++;
            }
        }
        if(b>n)break;
        if(s == 10)//每十个数字一行
        {
            s=0;
            putchar('\n');
        }
        
    }
 
    return 0;

}