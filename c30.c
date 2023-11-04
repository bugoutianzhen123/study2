#include<stdio.h>

int power(int n)//求10的n次方
{
    if (n>0) return 10*power(n-1);
    else return 1;
}

//求P
int number(int n,int t)//数字 个数
{
    int i,j=t,result=0;
    for(i=0;i<j;i++){
        result += n * power(t-1);
        t--;
    }
    //printf("%d\n",result);
    return result;

}

int main (){
    char a[10],da[2],b[10],db[2];
    int times_a=0,times_b=0,numa,numb;
    int A=0,B=0,pa,pb;
    scanf("%s%s%s%s",a,da,b,db);

    numa=da[0]-'0';numb=db[0]-'0';//字符转换为数字
    //printf("%d %d\n",numa,numb);

    while(a[A]){
        if (a[A] == da[0]) times_a++;
        A++;
    }
    while(b[B]){
        if (b[B] == db[0]) times_b++;
        B++;
    }
    pa = number(numa,times_a);pb=number(numb,times_b);
    //printf("%d %d\n",pa,pb);

    printf("%d\n",pa+pb);

    return 0;
}