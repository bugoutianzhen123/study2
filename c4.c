#include<stdio.h>
int main (){
    int a,b,m,r;//r 余数
    printf("please enter a b:");
    scanf("%d%d",&a,&b);
    if (a>=b)//保证a>b
    {
    }else{
        m=b;b=a;a=m;
    }
    for(;;){
      r=a%b;
      if (r!=0){
        a=b;b=r;
      }else break;
    }
    printf("%d",b);
}