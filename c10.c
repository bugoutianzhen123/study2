#include<stdio.h>



int main(){
    int n/*学生数*/,m/*课数*/;
    while(scanf("%d%d",&n,&m) != EOF)
    {
    int i,j,k;
    //scanf("%d%d",&n,&m);
    double score[n][m],and1=0,and2=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%lf",&score[i][j]);
        }
        
    }
    double score_n[n];//每人平均成绩
    double score_m[m];//每科平均成绩
    for(i=0;i<n;i++)//求每人平均
    {
        and1=0;
        for(j=0;j<m;j++){
           and1 += score[i][j];
        }
        score_n[i]= and1/m;
    }

    for(i=0;i<m;i++)//求每科平均成绩
    {
        and2=0;
        for(j=0;j<n;j++){
           and2 += score[j][i];
        }
        score_m[i] = and2/n;
    }

    int good=0;//优秀人数
    for(i=0;i<n;i++){
        int num = 0;
        for(j=0;j<m;j++){
            if(score[i][j] >= score_m[j])num += 1;
        }
        if(num == m)good+=1;
    }

    for(i=0;i<n;i++)//输出每人平均成绩
    {
        printf("%.2f ",score_n[i]);
    }putchar('\n');
    for(i=0;i<m;i++)//输出每科平均成绩
    {
        printf("%.2f ",score_m[i]);
    }putchar('\n');
    printf("%d\n",good);
    }

    return 0;
}