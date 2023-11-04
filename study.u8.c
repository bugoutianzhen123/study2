#include<stdio.h>
/*函数式宏
//#define sqr (x) ((X)*(x))//将 sqr 代换为(x)((x)*(x))
#define sqr(x) ((x)*(x))//将 sqr(x) 代换为((x)*(x))
//计算x的平方的函数式宏,适用多种类型的x

int sqr_int(int x)//计算int型的平方
{
    return x*x;
}

double sqr_double(double x)//计算double型的平方
{
    return x*x;
}

//注意
#define and1(x,y) x+y
#define and2(x,y) (x+y)
#define and3(x,y) ((x)+(y))

//#define alert() (putchar('\a'))//不带参数的函数式宏
#define alert() (putchar('\a'));
#define alert0() (putchar('\a'),putchar('\a'))
//用,隔开构成表达式，如用；可能会造成语句提前结束或报错


int main (){
//函数式宏
    int a =5,b=3,c=2;
    printf("%d  ",sqr_int(a));
    printf("%d  ",sqr_double(a));//类型不对，出错
    printf("%d  ",sqr(a));//sqr(a)展开后为(a)*(a)
    printf("%d  ",sqr_int(a++));printf("a=:%d     ",a);
    
    //printf("%d\n",sqr_int(a=a+1));
    printf("%d  ",sqr(a++));//sqr(a++)展开后为(a++)*(a++)
    printf("%d\n",sqr_int(a++));

    printf("%d  ",and1(c,b)*and1(c,b));//展开后为 c+b*c+b
    printf("%d  ",and2(c,b)*and2(c,b));//展开后为 (c+b)*(c+b)
    printf("%d\n",and1(c,b)*and1(c,b));//展开后为 ((c)+(b))*((c)+(b))

    alert()//函数式宏的作用是替换，被替换后该语句结尾有；故不需在main中加；
    
    return 0;
}*/

/*//冒泡排序
#define NUMBER 5
int bsort(int a[],int n)//左小右大
{
    int i,j;
    for(i=0;i< n-1;i++)
    {
        for (j= n-1;j>i;j--)//从后往前
        {
            if (a[j-1] > a[j])
            {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    return a[n];
}
int main ()
{
    int shuzu[5]={9,4,5,6,15};
    shuzu[5] = bsort(shuzu,5);
    printf("shuzu=:");
    for(int i =0;i<5;i++){
        printf("%d  ",shuzu[i]);
    }
    return 0;
}*/

/*//枚举类型
enum animal  { Dog,Cat,Monkey,Invalid};
//   枚举名  （  0   1    2        3  ）  枚举常量
//枚举名与变量名属于不同命名空间，可以相同
void dog(void){
    puts("汪汪！！");
}
void cat(void){
    puts("catt");
}
void monkey(void){
    puts("monkey");
}

enum animal select(void){
    int tmp;
    do {
        printf("0-dog  1-cat  2-monkey  3-invalid");
        scanf("%d",&tmp);
    }while (tmp<dog || tmp>Invalid);
    return tmp;
}
int main (void){
    enum animal selected;//定义变量selected的范围为0,1,2,3
    //此处enum animal 作用与int 类似
    do {
        switch (selected = select()){
            case Dog: dog();break;
            case Cat: cat();break;
            case Monkey:monkey();break;
        }
    }while(selected != Invalid);
    return 0;   
}*/

/*//递归函数
//将自己包含在内，或用自己定义自己
int factorial (int n)//n! = n*(n-1)!
{
    if (n>0)
        return n*factorial(n-1);
    else 
        return 1;
}
int main (){
    int num;
    printf("num = ");
    scanf("%d",&num);

    printf("num的阶乘是%d",factorial(num));
    return 0;
}*/

/*//输入和输出字符
int main (){
    int ch;
    printf("%d",'0');//输出的是字符‘0’的编码转化为十进制之后的数   
    printf("\"\n");//printf(""");不能输出"
    printf("\\\n");
    //getchar 读取字符并将其返回。输入结束或读取过程中发生错误时，就返回EOF值   
    while ((ch=getchar()) != EOF)//EOF来自<stdio.h>
       putchar(ch);
    //上下等效 用于确定字符读取是否有问题
    while(1){
        ch=getchar();
        if (ch == EOF)
            break;
        putchar(ch);
    }

    

    
    return 0;
}
//C 的输入输出一般会将读入以及待输出的字符暂存在缓存中，达成条件才实际进行操作
//1，缓存已满  （全缓冲）
//2，输入换行符  （行缓冲）
//3，立即输出  （无缓冲）
*/
