#include<stdio.h>

int jueduizhi (int x,int y)//比较绝对值大小
{
    if(x<0) x=-x;
    if(y<0) y=-y;
    if(x<y) return 1;
    else return 0;
}
int bsort(int a[],int n)//按绝对值排序
{
    int i,j;
    for(i=0;i< n-1;i++)
    {
        for (j= 0;j<i;j++)
        {
            if (jueduizhi(a[j] , a[j+1]))
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    return a[n];
}

int main (){
    int n,i,j;    
    //for (scanf("%d",&n);n>0;)
    while (1)
    {   
        scanf("%d",&n);
        if(n==0) break;//n=0 时结束
        int a[n];
        for (i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
          for (j=n-1;j>i;j--)
            {
              if (jueduizhi(a[j-1] , a[j]))
              {
                int temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
              }
            }
        }
        for(j=0;j<n;j++){
            if (j<n-1)  printf("%d ",a[j]);
            else  printf("%d\n",a[j]);
        }
    }
    
    return 0;
}