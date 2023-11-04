#include<stdio.h>

int main (){
    int n;
    while(scanf("%d",&n)!= EOF){
        char c;
        getchar();//只读取一个字符
        scanf("%c",&c);
        int r;//行数
        int i,j,k;

        r = (n%2 == 0) ? n/2: n/2 + 1 ;//求输出行数
        for (i=0;i<r;i++){
            printf("%c",c);
            for(j=0;j<n-2;j++){
                if (i == 0 || i == r-1)printf("%c",c);
                else printf(" ");
            }
            printf("%c\n",c);
        }

        return 0;

    }
}