#include <stdio.h>

int main (){
    int g,s,b,num,i;
    scanf("%d",&num);
    b = num/100;
    s = (num-100*b)/10;
    g = num%10;
    for(i=0;i<b;i++)printf("B");
    for(i=0;i<s;i++)printf("S");
    for(i=0;i<g;i++)printf("%d",i+1);

    return 0;
}