#include<stdio.h>

int main (){
    int n;
    while(scanf("%d",&n)!= EOF){
        int num[n];
        int i,j,and=0;
        for (i=0;i<n;i++){
            scanf("%d",&num[i]);
        }
        for (i=0;i<n;i++){
            for(j=0;j<n;j++){
                if (j == i)continue;//避免重复
                and += num[i]*10 + num[j];
            }
        }

        printf("%d\n",and);
    }

    return 0;   
}