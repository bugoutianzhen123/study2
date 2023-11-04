#include<stdio.h>
int main(void){
//do 循环后判断

int choice;
do{
    //循环体
    int a,b;
    printf("please enter a,b:");
    scanf("%d%d",&a,&b);
    if (a==b)
      puts("yes");
    else
      puts("no");
      printf("again?[yes--1/no--0]");
      scanf("%d",&choice);    
}while(choice==1);//表达式的值为1，继续执行do；；为0，结束
//限定输入范围

int c;
do
{
   printf("please enter c(c>=0 and c<=10):");
   scanf("%d",&c);
} while (c<0 || c>10);//c<0 || c>10 等价与 !(!c<0 && !c>10)(德摩根定律)
printf("%d",c);

puts("-----------------------------");
//while 循环后判断
int d;
d=0;
while (d<=10){
   printf("%d ",d++);//d的值显示后递增
}
putchar('\n');

int test=1;
while(test++ < 10){printf("%d ",test);}
 //先执行test++，循环后再进行判断

puts("-----------------------------");
//for
for(int i=0;i<5;i++)
//for([预处理(只在最开始执行一次)];[控制表达式(循环条件)];[收尾处理(作为循环的最后一步执行)])
   printf("%d ",i);

puts("-----------------------------");
putchar('\n');//'[字符常量]'
printf("1234564");

return 0;
  
}