#include<stdio.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int num[n][2],i;
        for(i=0;i<n;i++){
            scanf("%d%d",&num[i][0],&num[i][1]);
        }
        for(i=0;i<n;i++){
            if (num[i][0]%num[i][1]==0)printf("YES\n");
            else printf("NO\n");
        }


    }

    return 0;
}