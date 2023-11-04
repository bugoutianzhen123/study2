#include<stdio.h>

int min_add(int a[],int n){
    int i,j,k;
    int min=a[0];
    for (i=1;i<n;i++){
        if (min > a[i])min = a[i];
    }//min 为最小值
    for (i=0;i<n;i++){
        if (a[i] == min) return i;
    }//返回最小值在数组中的位置
}

int main (){
    int n;//
    while(scanf("%d",&n) != EOF){
        if(n==0)break;
        int str[n],i,j,k;
        int add;
        for (i=0;i<n;i++){
            scanf("%d",&str[i]);
        }
        add = min_add(str,n);
        int temp; temp = str[0];str[0] = str[add];str[add]= temp;
        for (i=0;i<n;i++){
            printf("%d ",str[i]);
        }putchar('\n');
    }
     
    return 0;
}