#include<stdio.h>

//什么也不指向的指针即为空指针
//#define NULL 0   //未知原因报错
//表示空指针的对象式宏NULL是空指针的常量

void one()
{
    int a,b,c,d[3];
    printf("&a:%p  ",&a);//输出变量的地址
    printf("&b:%p  ",&b);//&取址运算符（单目运算符）
    printf("&c:%p  ",&c);//%p为表示对象地址的转换说明
    printf("&d:%p  ",&d);
    printf("&d[0]:%p  ",&d[0]);
    printf("&d[1]:%p  ",&d[1]);
    printf("&d[2]:%p  ",&d[2]);

}

void change1(int x)
{
    x=20;
}//该结果不影响主函数

void change2(int *x)//传入指针（形参地址）
{
    *x=20;//改变指针对象
}//通过在指针前写上*来访问该指针指向的对象  解引用

void exchange(int *x,int *y)//交换
{
    int t=*x;
    *x=*y;
    *y=t;
}
void sort2 (int *n1,int *n2)
{//n1 为指针，*n1为指针对象
    exchange(n1,n2);
}

/*指针
int main (){
    //one();
    
    int a_1=1,a_2=2,a_3=3;
    int *a,*b,*c;//定义了指向int型变量的指针
    double *q;//指向double类型的变量需用double类型的指针
    a = &a_1;//a指向a_1//&a_1相当于type *型指针
    //b=a_1;//该行为vscode不报错，但会gcc失败
    printf("%d\n",*a);
    *a = 100;//将a指向的值赋为100
    //此时*a成了a_1的别名
    printf("%d  %d\n",a_1,a);
    a = &a_2;//改变指向对象
    *a = 200;
    printf("%d  %d\n",a_1,a_2);
    change1(a_2);printf("%d  ",a_2);
    change2(a);printf("%d\n",a_2);//等效于change2(&a_2);printf("%d\n",a_2);

    int bb=5,cc=10;printf("b=%d c=%d\n",bb,cc);
    exchange(&bb,&cc);printf("b=%d c=%d\n",bb,cc);
    sort2(&bb,&cc);printf("b=%d c=%d\n",bb,cc);


    return 0;
}*/

/*//指针与数组*/

void ary_set (int v[],int n)//int v[] 可改为 int *v
{
 
}

int main (){
    int a[10],i;//数组名原则上会被解释为指向该数组起始元素的指针
    for(i=0;i<10;i++){
        a[i]=i;
        printf("%d ",a[i]);
    }putchar('\n');
    int *p;
    p = a;//a相当于&a[0]
    for(i=0;i<10;i++){
        printf("&a[%d]=%p  p+%d=%p\n",i,&a[i],i,p+i);//&a[i]与(p+i)一致（当p指向a[0]）
    }
    for(i=0;i<10;i++){
        printf("%d ",*(p+i));//a[i]与*(p+i)一致（当p指向a[0]）
    }putchar('\n');
    p = &a[5];//p指向a[5] &a[5+i]与（p+i）一致
    printf("*(p-i)=%d=a[%d]\n",*(p-1),5-1);//
    //a = {1,2,3,4,5,6,7,8,9,10};a会被解释为指向数组起始元素的指针，但不可改写其值
    //赋值表达式的左操作数不可以是数组名
    
    p=a;
    printf("%d  %d\n",a[3],3[a]);// a[3]等效3[a] 
    // 这时a[i] i[a] *(a+i) *(i+a) p[i] i[p] *(p+1) *(1+p)等效
    // [] 为双目运算符 其中一个操作数是 指针 另一个操作数是 整数类数据类型

    return 0;
}
