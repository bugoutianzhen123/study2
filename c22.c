#include<stdio.h>

int main (){
    int c1,c2,h,hh,m,mm,s,ss;//s,h,m,为打点数
    scanf("%d %d",&c1,&c2);
    h = c2 - c1;
    hh = h/360000;
    m = h % 360000;
    mm = m/6000;
    s = m % 6000;
    ss = (s%100 == 0)? s/100:(s/100 + 1);
    printf("%d:%d:%d",hh,mm,ss);

    return 0;

}