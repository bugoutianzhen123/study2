#include<stdio.h>



int main (){
    int year=0,month=0,day=0;
    while(scanf("%d/%d/%d",&year,&month,&day)!=EOF){
        
        int i,a[12];
        if((year%4==0 && year%100 != 0) || year%400 == 0)//判断闰年
        {int a[12]={30,29,31,30,31,30,31,31,30,31,30,31};}
        else{int a[12]={30,28,31,30,31,30,31,31,30,31,30,31};}
        
        if((month<1 || month >12)||(day<1 || day> a[month-1])){printf("error\n");continue;}//检查数据

        for (i=0;i<month-1;i++)
        {
            day += a[i];
        }
        printf("%d\n",day);
    }

    return 0;
    //scanf("%d/%d/%d",&year,&month,&day);
    //printf("%d/%d/%d",year,month,day);
}