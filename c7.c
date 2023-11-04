#include <stdio.h>

int main ()
{
    int n;
    while(scanf("%d",&n),n != EOF)
    {
    int i,result = 0;
    //scanf("%d",&n);if(n == EOF)break;
    int str [n];
    for (i=0;i<n;i++){
        scanf("%d",&str[i]);
        str[i]= str[i]%2==0 ?  1:str[i];//把偶数变为1 
    }
    //for (i=0;i<n;i++)printf("%d ",str[i]);//检查
    for (i=0;i<n;i++){
        result*= str[i];//相乘
    }
    printf("%d\n",result);
    }

    return 0;
    




}