#include<stdio.h>
int main (){
    int t;
    while(scanf("%d",&t)!=EOF){
        int m,n,x,y;//m行，n列，  子矩阵，x行，y列
        int i,j,k,l;
        scanf("%d%d%d%d",&m,&n,&x,&y);
        int str[m][n];
        for(i=0;i<m;i++)//输入
        {
            for(j=0;j<n;j++){
                scanf("%d",&str[i][j]);
            }
        }
        int max=0,and=0;
        for(i=0;i<m+1-x;i++)
        {
            for(j=0;j<n+1-y;j++)//第i行，j列的元素
            {
                and=0;               
                for(k=0;k<x;k++)//计算以第i行，j列的元素为左上角的元素的x*y矩阵的元素的和
                {
                    for(l=0;l<y;l++)
                    {
                        and +=str[i+k][j+l];
                    }
                }
                if (max<and) max = and;

            }
        }

        printf("%d\n",max);


    }

    return 0;
  
}