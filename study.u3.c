#include<stdio.h>

int main (void)
{//if (表达式)
    int a=10,b=12;
    if (a%5)//表达式的值为0 不执行
       puts("a can't");
    if (b%5)//表达式的值不为0 执行
       puts("b can't");

   if (a==b)//不加；   若加；语句结束
   //“==”左右两侧相等，表达式的值为1，反之为0（结果为int）
   //“!=”与“==”相反
      puts("yes");
   else
      puts("no");
   //“<”,“>”,“>=”,“<=”成立时，表达式的值为1，反之为0
   puts("----------------------------");
//if  else
   if (a%3)//表达式的值不为0 执行if
      puts("a can't");
   else//表达式的值为0 执行else
      puts("a is");

//复合语句 需用{}括起来
int max,min;
   
   if(a>b){
      max=a;
      min=b;
      } 
      else{max=b;min=a;}
      printf("max:%D\nmin:%d\n",max,min);
puts("----------------------------");
//swich
int c=11;
switch(c%4){
   //会运行case [c%4]
   case 0:puts("yes"); break;//break 跳出switch
   case 1:puts("1");break;//若无break，当运行case 1后会继续运行下个语句
   case 2:puts("2");break;
   case 3:
   case 4:puts("4");
   default:puts("no");break;
}

int min2 ;
//?将if语句功能融合在单一语句中
min2 = a<b?a:b;//min2等于a，b中的最小值

    return 0;   
}