#include<stdio.h>//把<stdio.h>中的全部内容读取到程序中
//#include文件包含指令   <stdio.h>头文件（printf函数的函数原型声明等）

#define NUMBER 5
//创建实体变量的声明 定义
int tensu[NUMBER];//函数外声明的变量从该处到程序结尾作用（文件作用域）

int putchar(int);//不指定形参的名称

int no();//yao以 ；结尾
//函数原型声明   编译器会知道no无需参数，且会返回int型的值
//no 在main后，想要在main中调用no需如此（故一般把main放在最后）

//定义一个函数
//函数头
int/*返回类型（只能返回一个值）*/ max2/*函数名*/ (int a,int b)/*形参声明*/
//函数体
{
    if(a>b)return a;
    else return b;//执行return后返回main
}//或 执行到最后一个“}”后返回main

int max_of(int a[])//接受数组 使用时 max_of(数组名)
{
   /*code*/
}

int max_of1(const int a[]/*a*/)
//接受数组，且禁止在函数内修改数组/变量 如果赋值会报错
{
   /*code*/
}

int duowei(int a[][3]){}//使用时 duowei(数组名[][3])

int max4(int a,int b,int c,int d)
{
    return max2(max2(a,b),max2(c,d));
    //可在自己创建的函数中调用其他自己创建的函数
}

/*int*/void putstars (int n){ while(n-- > 0)putchar('*');}
//调用无返回值的函数声明void（书上）
//实际上不用声明void也行（疑惑）
/*
int a=10;//文件作用域
int main()//启动程序时执行main函数
{
  int a=5,b=7,c=8,d=9,aa[5],m;//a块作用域 1(文件作用域的a被隐藏)
  int a=4;//a 块作用域 2 （外层的a被隐藏）
  m=max2(a,b);//执行max2函数
  printf("%d\n",m);
  m=max4(a,b,c,d);
  printf("%d\n",m);
  //无返回值 
  putstars(a);
  putchar('\n');
  //无形参
  int e = no();//e的初始化方法只适用于拥有自动储存期的对象
  printf("%d",e);
  //e = z;mian 中未声明z，no中声明的z在main中无效

  extern int tensu[];//使用的是在某处声明的tensu
    for(int i=0;i<NUMBER;i++){
        tensu[i]=i;
    }
  
  return 0;
}

int no()
//不接受函数“()”可输入非形参声明(包括不输入任何字符)
{   
    int z=100;//函数no中声明的变量z只在no中通用
    //z的作用域（通用范围）从int z 到所处函数（no）的最后的} （块作用域）
    //a = 1;no中未声明a，main中声明的a在no中无效
    return z;
}*/

//储存期
int fx=0;//静态储存其 文件作用域 程序开始时被创建，被初始化为0
void func(void)
{
  static int sx =0;//静态储存其 块作用域 程序开始时被创建，被初始化为0
  int        ax =0;//自动存储期 块作用域 调用func函数时被创建
  //int ax == auto int ax
  printf("%3d%3d%3d\n",ax++,sx++,fx++);
}//func结束，ax消失
int main(void)
{
  int i;//自动存储期 main函数执行到这一步时被创建
  puts(" ax sx fx ");
  puts("-----------");
  for (i=0;i<10;i++)
    func();
  puts("-----------");
  return 0;   
}