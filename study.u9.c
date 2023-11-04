#include<stdio.h>

/*//字符串
//void func(viod)
//{   //字符串字面量被赋予了静态生命周期
 //   puts("abcd");
//    puts("abcd");//根据编译器，两个"abcd" 被作为同一\不同字符串常量存储
//}
int main (){
    printf("abc\n");//带双引号的一系列字符称为字符串常量
    //字符串常量的末尾会被加上一个叫做 null字符 的值为0的字符
    printf("%u\n",sizeof("abc"));//三个字符组成的"abc"占4位
    printf("%u\n",sizeof("ab\0c"));
    printf("%u\n",sizeof("ab0c"));
    printf("%u\n",sizeof("ab\tc"));// \t表示水平制表的转义字符

    
    char str1[5] = {'a','b','c','\0'};//数组内实际为{a,b,c,\0,\0}
    printf("%s\n",str1);
    char str2[4] = {'a','b','c','d'};//不用\0（无null字符）会出错
    printf("%s\n",str2);
    char str3[] = "abc";//字符数组简单声明，元素个数可省略，  可以用{"abc"}
    printf("%s\n",str3);
    //空字符串 一个字符也没有的字符串
    char ns[] = " ";//等效于 char ns[] = {'\0'}
    //读取字符串
    char name[100];
    printf("你的名字：");scanf("%s",name);printf("\n%s\n",name);//读取字符时，scanf不加&
    //经测试，不能输入中文
    char str4[]="abcdef";
    printf("%s\n",str4);
    printf("%3s\n",str4);//至少显示三位
    printf("%.3s\n",str4);//最多显示三位
    printf("%8s\n",str4);//右对齐
    printf("%-8s\n",str4);//左对齐
    return 0;
}*/

/*//字符串数组
int main (){
    int i;
    char cs[][6]={"abcd","hello","world"};//字符串个数决定第一个[]
    for (i=0;i<3;i++)printf("cs[%d] = \"%s\"\n",i,cs[i]);
    return 0;
}*/

/*//字符串处理*/
/*//字符串长度
int length(const char s[])//求字符串长度
{
    int len = 0;
    //字符串数组中的第一个\0出现在s[i],说明s[0]到s[i-1]都是字符，故字符长度为i
    while(s[len])len++;//字符串数组中
    return len;
}
void put(const char s[])//输出字符串
{
    int i =0;
    while(s[i])
    putchar(s[i++]);
}

int main (){
    char str[128];
    printf("输入字符串：");
    scanf("%s",str);
    printf("长度：%d\n",length(str));
    printf("%s\n",str);//输出字符串
    put(str);//输出字符串
    putchar('\n');
    return 0;
}*/
/*//大小写转换
#include<ctype.h>
void str_toupper(char s[])//英文字母小写换成大写
{
    int i=0;
    while(s[i])
    {
        s[i]=toupper(s[i]);
        i++;
    }
}
void str_tolower(char s[])//英文字母大写换成小写
{
    int i=0;
    while(s[i])
    {
        s[i]=tolower(s[i]);
        i++;
    }
}
int main (){
    char str[128]="abcdefgHIJKL";
    printf("%s\n",str);
    str_toupper(str);
    printf("%s\n",str);
    str_tolower(str);
    printf("%s\n",str);

    return 0;

    char str1[4]={'a','b','c','d'};//不会被当成字符串

}*/
