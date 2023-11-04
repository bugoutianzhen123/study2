#include<stdio.h>

int jiecheng(int x)//求阶乘
{
    if (x>1)return x*jiecheng(x-1);
    else return 1;
}

int zuhei(int n/*总数*/,int m/*目标数*/)//求组合
{
    return jiecheng(n)/(jiecheng(n-m)*jiecheng(m));
}

int main (){
    int n;
    while(scanf("%d",&n)!= EOF){
        if(n == 0)break;
        int x,y,ways=0;
        for (x=0;;x++){
            y=n-x;if(x>y)break;
            if ((y-x)%3 == 0) ways += zuhei(n,x);
        }
        printf("%d\n",ways);
    }

    return 0;   
}