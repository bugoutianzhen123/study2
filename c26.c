#include<stdio.h>
int main (){
    int a,b,m,r,bb,aa;//r 余数
    scanf("%d%d",&a,&b);bb=b;aa=a;//记录原a，b
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
    }//此时b是最大公因数

    printf("%d",(aa*bb)/b);
}