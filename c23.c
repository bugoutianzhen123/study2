#include<stdio.h>

int main (){
    int n[10]={0};//用于存储数字出现次数
    int i=0,j,k;
    
    char number[1000];
    scanf("%s",number);
    while(number[i])//记录数字出现次数
    {
        switch(number[i])
        {
            case '0': n[0] += 1;break;
            case '1': n[1] += 1;break;
            case '2': n[2] += 1;break;
            case '3': n[3] += 1;break;
            case '4': n[4] += 1;break;
            case '5': n[5] += 1;break;
            case '6': n[6] += 1;break;
            case '7': n[7] += 1;break;
            case '8': n[8] += 1;break;
            case '9': n[9] += 1;break;
        }
        i++;
    }
    for (j=0;j<10;j++){
        if(n[j]>0)printf("%d:%d\n",j,n[j]);
    }
   
    return 0;   
}