#include<stdio.h>

int main (){
    int T,i,j;
    scanf("%d",&T);
    int num[T][3];
    for(i=0;i<T;i++){
        for (j=0;j<3;j++){
            scanf("%d",&num[i][j]);
        }
    }

    for (i=0;i<T;i++){
        if(num[i][0] + num[i][1] > num[i][2])printf("Case #%d: ture\n",i+1);
        else printf("Case #%d: false\n",i+1);

    }

    return 0;

}