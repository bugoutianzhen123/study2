#include<stdio.h>
int main(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    switch(a>=0&&b>=0&&a<=100&&b<=100)//是否错误
    {
    case 1:switch(a<60|b<60)//是否合格
       {
       case 1:puts("it is not pass");break;
       case 0:puts("it is pass");break;
       }
       break;
    case 0:puts("it is error");break;
    }
}