#include<stdio.h>

int main()
{
double a,b,c;
scanf("%lf%lf%lf",&a,&b,&c);
if(a>0&&b>0&&c>0)//是否大于0
 if(a+b>c&&a+c>b&&b+c>a)//能否构成三角形
   if(a==b||a==c||b==c)//是否等腰
      if(a==b&&b==c) //是否等边
      puts("1");
      else puts("2");
    else puts("3");
else puts("0");

return 0;

}