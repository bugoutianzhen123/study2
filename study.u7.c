#include<stdio.h>
#include<limits.h>

int count_bits(unsigned x)//返回x中设置的位数
{
    int bits = 0;
    while (x) {
        if (x & 1U) bits++;
        //&,|,~对操作数的二进制逻辑运算
        //&&,||,!对操作数的值逻辑运算
        x >>= 1;//x=x>>1
    }
    return bits;
}
int int_bits(void)
{
    return count_bits(~0U);
}
void print_bits(unsigned x)
{
    int i;
    for (i= int_bits()-1; i >=0;i--)
       putchar(((x>>i)&1U)? '1':'0');
}

int main(){
    int x;//有符号int
    signed int y;//有符号int
    //上下等效 (同时存在会报错)
    //signed y;
    unsigned int z;//无符号int
    //上下等效 (同时存在会报错)
    //unsigned z;
    
    x = 4294967295;
    printf("%d\n",x);//转化为二进制后，因补数，输出-1
    x = 2147483647;
    printf("%d\n",x);

    z = 4294967295;
    printf("%d\n",z);
    //声明创建数据类型的同义词
    typedef int t;//使int 与 t 等效
    t h;
    h=100;
    printf("%d\n",h);//以十进制输出
    printf("%o\n",h);//以八进制输出
    printf("%x\n",h);//以十六进制输出
    print_bits(h);putchar('\n');
    
    printf("%d",int_bits());
    
    puts("\n---------------------------");
    
    h=h << 2;//a << b a的二进制数左移 2位
    printf("%d\n",h);

    printf("%u\n",sizeof(x));
    printf("%u\n",(unsigned)sizeof(char));
    printf("%u\n",sizeof(char));//显示字符型和整型长度
    printf("%u\n",sizeof(int));
    //int长度为4字节（32位） 故int的范围是-2^31~(2^31-1),一共2^32个数
    
    int a[5];
    printf("%u\n",sizeof(a)/sizeof(a[0]));
    //求数组个数

    printf("%f\n",1.23);//double 
    printf("%f\n",1.23f);//float
    printf("%lf\n",1.23L);//long double
    printf("%f\n",1.23E4);//科学计数法
    printf("%f\n",1.23E-5);

    int q = 5-3-1;//5-3-1等效（5-3）-1 左结合性
    x = y = 1;// 等效于 x = (y=1) 右结核性
    
    return 0;
}