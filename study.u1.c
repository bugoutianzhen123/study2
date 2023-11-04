#include <stdio.h>

int main ()//1.2
{
    int a,b;
    puts ("please enter tow integers:");//只能有一个实参
    scanf("%d",&a);scanf("%d",&b);
    printf("a=%d\n",a);
    printf("a*5=%d\n",a*5);
    printf("a+12=%d\n",a+12);
    printf("a-6=%d\n",a-6);
    printf("a+b=%d\n",a+b);
    return 0;
}

/*
int main ()//1.1
{
    int n;//[type] [name] 声明名为name，类型为type的变量
    int a,c;//声明多个变量用“，”隔开
    n=1,a=2;
    int b =2.7;//会被取整
    printf("n=%d\na=%d\nb=%d\nc=%d\n\n",n,a,b,c);//未被赋值的变量会被赋随机值
    a,b=8,9;

     printf("n=%d\na=%d\nb=%d\nc=%d\n",n,a,b,c);

    return 0

}
*/