#include<stdio.h>
double bsort(double a[],int n)//左小右大 排序
{
    int i,j;
    for(i=0;i< n-1;i++)
    {
        for (j= n-1;j>i;j--)//从后往前
        {
            if (a[j-1] > a[j])
            {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    return a[n];
}
double summation(double a[],int n)//去极求和
{
    int i;
    double result=0;
    for(i=1;i<n-1;i++)
    {
        result+= a[i];
    }
    return result;
}

int main (){

    int n;
    while(scanf("%d",&n),n != EOF)
    {
    int and=0,i;
    double end=0;
    //scanf("%d",&n);
    double score[n];
    for(i=0;i<n;i++){
        scanf("%lf",&score[i]);
    }
    bsort(score,n);
    for(i=0;i<n;i++){printf("%f ",score[i]);}
    and = summation(score,n);
    printf("\n%f",and);
    end = (and/(double)(n-2));

    printf("\n%5.2f",end);
    }

    return 0;

}
