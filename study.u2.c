#include <stdio.h>
/*
int main (void)
{
    int x,y;//(x/y)*y+x%y==x
    printf("%d\n%d",x,y);

}
*/

int main (void)
{
//变量类型相关
    printf("------------------------\n");
    int x,y;//double 浮点数 int [-32767,32767]
    x=54;
    y=98;
    printf("%d%%\n",x*100/y);//%d%%在%d后输出%
    printf("%f\n",(double)(x+y)/2);//将（x+y）的结果转化为double类型

    int a = 9.99;
    double b ;printf("please scanf b:");scanf ("%lf",&b);//double  用scanf赋值时用%lf
    printf("%d\n%f\n\n",a,b);//double类型用%f(默认显示小数点后六位)

    int num0;
    printf("%d\n",num0);//输出随机数
    printf("%4.2f\n",num0);//会输出0.00

    
//转换说明相关
    printf("-------------------------\n");
    double num=123456.789;
    printf("%f\n",num);//% A B . C D 
    printf("%d\n",num);//D：转换说明符 显示type类型的数 d int； f double；
    //上者会被赋予随机值，下者被舍去小数部分
    printf("%d\n",(int)num);
    printf("%6.2f\n",num);//C：精度  显示的最小位数
    printf("%11.2f\n",num);//B：最小字段宽度  至少要显示出的字符位数
    printf("%11.3f\n",num);//A 为空 用空白补齐位数
    printf("%011.3f\n",num);//A 为0 用0补齐位数
    
    return 0;

}
/*
int main (void)//2-6
{
    int height;
    printf("please enter your height:");scanf("%d",&height);
    printf("your normal weight is %4.1fkg\n",(double)(height-100)*0.9);
}
*/